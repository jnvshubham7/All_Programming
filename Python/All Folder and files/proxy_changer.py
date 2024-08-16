import time
import socket
import subprocess

def get_network_type():
    hostname = socket.gethostname()
    ip_address = socket.gethostbyname(hostname)
    
    print(f"Hostname: {hostname}, IP Address: {ip_address}")
    
    if ip_address.startswith("192.168") or ip_address.startswith("10."):
        return "WiFi"
    else:
        return "MobileData"

def set_proxy_windows(proxy):
    try:
        subprocess.check_call(['reg', 'add', 'HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings', '/v', 'ProxyServer', '/t', 'REG_SZ', '/d', proxy, '/f'])
        subprocess.check_call(['reg', 'add', 'HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings', '/v', 'ProxyEnable', '/t', 'REG_DWORD', '/d', '1', '/f'])
        print(f"Proxy set to {proxy}")
    except subprocess.CalledProcessError as e:
        print(f"Failed to set proxy: {e}")

def disable_proxy_windows():
    try:
        subprocess.check_call(['reg', 'add', 'HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings', '/v', 'ProxyEnable', '/t', 'REG_DWORD', '/d', '0', '/f'])
        print("Proxy disabled")
    except subprocess.CalledProcessError as e:
        print(f"Failed to disable proxy: {e}")

def main():
    last_network_type = None
    
    while True:
        network_type = get_network_type()
        print(f"Detected network type: {network_type}")
        
        if network_type != last_network_type:
            if network_type == "WiFi":
                set_proxy_windows("172.31.2.3:8080")
            else:
                disable_proxy_windows()
            last_network_type = network_type
        
        time.sleep(30)  # Check every 30 seconds

if __name__ == "__main__":
    main()
