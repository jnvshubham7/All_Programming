import speech_recognition as sr
import pyttsx3
import tkinter as tk
import threading

# Initialize recognizer and TTS engine
recognizer = sr.Recognizer()
tts_engine = pyttsx3.init()

is_listening = False

def listen_and_convert():
    global is_listening
    with sr.Microphone() as source:
        recognizer.adjust_for_ambient_noise(source)
        print("Listening...")
        audio = recognizer.listen(source)
        try:
            print("Recognizing...")
            text = recognizer.recognize_google(audio, language="en-US")
            print(f"Text: {text}")
            tts_engine.say(text)
            tts_engine.runAndWait()
            print(text)
        except sr.UnknownValueError:
            print("Sorry, I did not understand the audio.")
        except sr.RequestError as e:
            print(f"Could not request results; {e}")
    is_listening = False

def toggle_listening():
    global is_listening
    if not is_listening:
        is_listening = True
        threading.Thread(target=listen_and_convert).start()

def floating_button():
    root = tk.Tk()
    root.title("Floating Button")
    root.geometry("100x100")
    root.overrideredirect(True)
    root.attributes("-topmost", True)

    button = tk.Button(root, text="Listen", command=toggle_listening)
    button.pack(expand=True)

    def drag_window(event):
        root.geometry(f"+{event.x_root}+{event.y_root}")

    root.bind("<B1-Motion>", drag_window)
    root.mainloop()

if __name__ == "__main__":
    floating_button()
