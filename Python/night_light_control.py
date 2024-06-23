import tkinter as tk
from tkinter import ttk
import subprocess

# Function to set night light strength
def set_night_light_strength(value_str):
    try:
        strength = int(float(value_str))  # Convert to float first, then to int
        # PowerShell command to set night light strength
        ps_command = f"""
        $key = 'HKCU:\\Software\\Microsoft\\Windows\\CurrentVersion\\CloudStore\\Store\\DefaultAccount\\Current\\default\\$windows.data.bluelightreduction.bluelightreductionstate\\Current'
        $value = Get-ItemProperty -Path $key -Name Data | Select-Object -ExpandProperty Data
        if ($value[12] -eq 0) {{
            $value[12] = 1
        }}
        $value[16] = [byte]{strength}
        Set-ItemProperty -Path $key -Name Data -Value $value
        """
        subprocess.run(["powershell", "-Command", ps_command], shell=True)
    except ValueError:
        pass  # Handle the case where value_str cannot be converted to float or int

# Create the main window
root = tk.Tk()
root.title("Night Light Control")
root.geometry("300x100")

# Create a label
label = ttk.Label(root, text="Adjust Night Light Strength")
label.pack(pady=10)

# Create a slider
slider = ttk.Scale(root, from_=0, to=100, orient='horizontal', command=set_night_light_strength)
slider.set(50)  # Default value
slider.pack(pady=10)

# Run the application
root.mainloop()
