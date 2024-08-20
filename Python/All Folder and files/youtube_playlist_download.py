import yt_dlp as ytdlp
from pydub import AudioSegment
import os

# Path to save downloaded files
DOWNLOAD_PATH = 'downloads'

def download_video(url, download_path):
    ydl_opts = {
        'format': 'bestaudio/best',
        'outtmpl': os.path.join(download_path, '%(title)s.%(ext)s'),
        'postprocessors': [{
            'key': 'FFmpegExtractAudio',
            'preferredcodec': 'mp3',
            'preferredquality': '192',
        }],
    }
    with ytdlp.YoutubeDL(ydl_opts) as ydl:
        info = ydl.extract_info(url, download=False)
        ydl.download([url])
        return os.path.join(download_path, f"{info['title']}.mp3")

def download_playlist(playlist_url):
    ydl_opts = {
        'format': 'bestaudio/best',
        'outtmpl': os.path.join(DOWNLOAD_PATH, '%(title)s.%(ext)s'),
        'postprocessors': [{
            'key': 'FFmpegExtractAudio',
            'preferredcodec': 'mp3',
            'preferredquality': '192',
        }],
    }
    if not os.path.exists(DOWNLOAD_PATH):
        os.makedirs(DOWNLOAD_PATH)

    with ytdlp.YoutubeDL(ydl_opts) as ydl:
        ydl.download([playlist_url])

if __name__ == '__main__':
    # Replace with your YouTube playlist URL
    playlist_url = 'https://youtube.com/playlist?list=PL9bw4S5ePsEEqCMJSiYZ-KTtEjzVy0YvK'
    download_playlist(playlist_url)
