import winreg
import subprocess

def toggle_night_light():
    # Registry key and value names
    key_path = r"Software\Microsoft\Windows\CurrentVersion\CloudStore\Store\DefaultAccount\Current"
    setting_path = r"$$windows.data.bluelightreduction.settings"
    data_key = r"Data"

    # Open the registry key
    try:
        key = winreg.OpenKey(winreg.HKEY_CURRENT_USER, key_path + "\\" + setting_path, 0, winreg.KEY_READ)
        data, regtype = winreg.QueryValueEx(key, data_key)
        winreg.CloseKey(key)
    except FileNotFoundError:
        print("Night Light setting not found in the registry.")
        return

    # Convert the binary data to a bytearray
    data = bytearray(data)

    # Toggle the night light state (assuming the byte at position 24 is the on/off state)
    if data[24] == 1:
        data[24] = 0  # Turn off
        print("Night Light is now OFF")
    else:
        data[24] = 1  # Turn on
        print("Night Light is now ON")

    # Write the updated data back to the registry
    try:
        key = winreg.OpenKey(winreg.HKEY_CURRENT_USER, key_path + "\\" + setting_path, 0, winreg.KEY_WRITE)
        winreg.SetValueEx(key, data_key, 0, regtype, bytes(data))
        winreg.CloseKey(key)
    except Exception as e:
        print(f"Error writing to the registry: {e}")
        return

    # Notify the system that the registry has been updated
    subprocess.run(["RUNDLL32.EXE", "user32.dll,UpdatePerUserSystemParameters"], check=True)

if __name__ == "__main__":
    toggle_night_light()
