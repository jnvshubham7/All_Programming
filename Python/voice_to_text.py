import os
import subprocess
import speech_recognition as sr
import tkinter as tk
from tkinter import ttk
import threading
import pyperclip
import whisper
import pystray
from PIL import Image, ImageDraw
import tempfile

# Check if ffmpeg is accessible
try:
    result = subprocess.run(['ffmpeg', '-version'], check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    print("ffmpeg is accessible")
    print(result.stdout.decode())  # Optional: print the ffmpeg version details
except Exception as e:
    print(f"ffmpeg is not accessible: {e}")

# Initialize recognizer and whisper model
recognizer = sr.Recognizer()
whisper_model = whisper.load_model("base")

is_listening = False
audio_buffer = []
audio_buffer_lock = threading.Lock()

def listen_continuously():
    global audio_buffer
    with sr.Microphone() as source:
        recognizer.adjust_for_ambient_noise(source)
        while is_listening:
            print("Listening...")
            try:
                audio = recognizer.listen(source)
                with audio_buffer_lock:
                    audio_buffer.append(audio)
                print("Audio buffered")
            except Exception as e:
                print(f"Error during listening: {e}")

def recognize_speech():
    global is_listening, audio_buffer
    if audio_buffer:
        combined_audio = sr.AudioData(
            b''.join([audio.get_raw_data() for audio in audio_buffer]),
            audio_buffer[0].sample_rate,
            audio_buffer[0].sample_width
        )

        with tempfile.NamedTemporaryFile(suffix=".wav", delete=False) as temp_audio_file:
            temp_audio_file.write(combined_audio.get_wav_data())
            temp_audio_file_path = temp_audio_file.name

        # Recognize speech using Whisper model
        try:
            print("Recognizing...")
            result = whisper_model.transcribe(temp_audio_file_path)
            text = result['text']
            print(f"Text: {text}")
            pyperclip.copy(text)  # Copy text to clipboard
        except Exception as e:
            print(f"Error recognizing audio: {e}")
        finally:
            os.remove(temp_audio_file_path)  # Clean up temporary file

        with audio_buffer_lock:
            audio_buffer = []

    is_listening = False
    update_button_text()

def toggle_listening():
    global is_listening
    if is_listening:
        recognize_speech()
    else:
        is_listening = True
        threading.Thread(target=listen_continuously, daemon=True).start()
    update_button_text()  # Ensure button text is updated after starting/stopping listening

def update_button_text():
    if is_listening:
        button.config(text="Stop Listening")
    else:
        button.config(text="Listen")

def create_image():
    # Create an image for the system tray icon
    width = 64
    height = 64
    image = Image.new('RGB', (width, height), (255, 255, 255))
    dc = ImageDraw.Draw(image)
    dc.rectangle((0, 0, width, height), fill=(255, 0, 0))
    dc.text((width // 4, height // 4), "FB", fill=(255, 255, 255))
    return image

def quit_program(icon, item):
    icon.stop()
    root.quit()

def show_window(icon, item):
    root.deiconify()
    icon.stop()

def hide_window():
    root.withdraw()
    image = create_image()
    menu = (pystray.MenuItem('Quit', quit_program), pystray.MenuItem('Show', show_window))
    icon = pystray.Icon("FloatingButton", image, "Floating Button", menu)
    icon.run()

def close_window():
    root.quit()

def floating_button():
    global button, root
    root = tk.Tk()
    root.title("Floating Button")
    root.geometry("200x200")
    root.overrideredirect(True)
    root.attributes("-topmost", True)

    button = ttk.Button(root, text="Listen", command=toggle_listening)
    button.pack(expand=True, fill=tk.BOTH)

    close_button = tk.Button(root, text="X", command=close_window, bg="red", fg="white")
    close_button.place(x=180, y=0)  # Position the button at the top-right corner

    def drag_window(event):
        x = event.x_root - root.winfo_width() // 2  # Center the drag
        y = event.y_root - root.winfo_height() // 2
        root.geometry(f"+{x}+{y}")

    root.bind("<B1-Motion>", drag_window)
    root.protocol('WM_DELETE_WINDOW', hide_window)
    root.mainloop()

if __name__ == "__main__":
    floating_button()
