import win32serviceutil
import win32service
import win32event
import servicemanager
import socket
import subprocess
import logging
import os

class ProxyChangerService(win32serviceutil.ServiceFramework):
    _svc_name_ = "ProxyChangerService"
    _svc_display_name_ = "Proxy Changer Service"
    _svc_description_ = "This service changes the proxy settings based on the network type."

    def __init__(self, args):
        win32serviceutil.ServiceFramework.__init__(self, args)
        self.hWaitStop = win32event.CreateEvent(None, 0, 0, None)
        socket.setdefaulttimeout(60)

    def SvcStop(self):
        self.ReportServiceStatus(win32service.SERVICE_STOP_PENDING)
        win32event.SetEvent(self.hWaitStop)
        logging.info('Service stopped')

    def SvcDoRun(self):
        servicemanager.LogMsg(
            servicemanager.EVENTLOG_INFORMATION_TYPE,
            servicemanager.PYS_SERVICE_STARTED,
            (self._svc_name_, '')
        )
        self.main()

    def main(self):
        logging.basicConfig(
            filename=os.path.join(os.getenv('TEMP'), 'proxy_service.log'),
            level=logging.DEBUG,
            format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
        )
        logging.info('Service started')
        while True:
            self.run_proxy_changer()
            win32event.WaitForSingleObject(self.hWaitStop, 60000)  # Check every minute

    def get_network_type(self):
        hostname = socket.gethostname()
        ip_address = socket.gethostbyname(hostname)
        if ip_address.startswith("192.168") or ip_address.startswith("10."):
            return "WiFi"
        else:
            return "MobileData"

    def set_proxy_windows(self, proxy):
        subprocess.call(['reg', 'add', 'HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings', '/v', 'ProxyServer', '/t', 'REG_SZ', '/d', proxy, '/f'])
        subprocess.call(['reg', 'add', 'HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings', '/v', 'ProxyEnable', '/t', 'REG_DWORD', '/d', '1', '/f'])
        logging.info(f'Proxy set to {proxy}')

    def disable_proxy_windows(self):
        subprocess.call(['reg', 'add', 'HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings', '/v', 'ProxyEnable', '/t', 'REG_DWORD', '/d', '0', '/f'])
        logging.info('Proxy disabled')

    def run_proxy_changer(self):
        network_type = self.get_network_type()
        logging.info(f'Network type detected: {network_type}')
        if network_type == "WiFi":
            self.set_proxy_windows("http://proxy.example.com:8080")
        else:
            self.disable_proxy_windows()

if __name__ == '__main__':
    win32serviceutil.HandleCommandLine(ProxyChangerService)
