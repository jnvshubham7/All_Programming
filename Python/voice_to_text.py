import os
import subprocess
import speech_recognition as sr
import tkinter as tk
import threading
import pyperclip
import whisper

# Ensure ffmpeg is in PATH
ffmpeg_path = r'D:\ffmpeg-master-latest-win64-gpl\ffmpeg-master-latest-win64-gpl\bin'
if os.path.exists(os.path.join(ffmpeg_path, 'ffmpeg.exe')):
    os.environ['PATH'] += os.pathsep + ffmpeg_path
else:
    print("Invalid ffmpeg path")

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

def listen_continuously():
    global audio_buffer
    with sr.Microphone() as source:
        recognizer.adjust_for_ambient_noise(source)
        while is_listening:
            print("Listening...")
            audio = recognizer.listen(source)
            audio_buffer.append(audio)
            print("Audio buffered")

def recognize_speech():
    global is_listening, audio_buffer
    if audio_buffer:
        combined_audio = sr.AudioData(
            b''.join([audio.get_raw_data() for audio in audio_buffer]),
            audio_buffer[0].sample_rate,
            audio_buffer[0].sample_width
        )

        with open("temp_audio.wav", "wb") as f:
            f.write(combined_audio.get_wav_data())

        # Recognize speech using Whisper model
        try:
            print("Recognizing...")
            result = whisper_model.transcribe("temp_audio.wav")
            text = result['text']
            print(f"Text: {text}")
            pyperclip.copy(text)  # Copy text to clipboard
        except Exception as e:
            print(f"Error recognizing audio: {e}")

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

def floating_button():
    global button
    root = tk.Tk()
    root.title("Floating Button")
    root.geometry("100x100")
    root.overrideredirect(True)
    root.attributes("-topmost", True)

    button = tk.Button(root, text="Listen", command=toggle_listening)
    button.pack(expand=True)

    def drag_window(event):
        x = event.x_root - root.winfo_width() // 2  # Center the drag
        y = event.y_root - root.winfo_height() // 2
        root.geometry(f"+{x}+{y}")

    root.bind("<B1-Motion>", drag_window)
    root.mainloop()

if __name__ == "__main__":
    floating_button()
