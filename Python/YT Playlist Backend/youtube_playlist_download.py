import yt_dlp as ytdlp
import os
from tqdm import tqdm
from colorama import Fore, Style

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
        'progress_hooks': [tqdm_hook],  # Add progress hook
    }
    with ytdlp.YoutubeDL(ydl_opts) as ydl:
        info = ydl.extract_info(url, download=False)
        ydl.download([url])
        return os.path.join(download_path, f"{info['title']}.mp3")

def tqdm_hook(d):
    if d['status'] == 'downloading':
        total_bytes = d.get('total_bytes', 0)
        downloaded_bytes = d.get('downloaded_bytes', 0)
        speed = d.get('speed', 0)
        eta = d.get('eta', 0)
        
        percentage = (downloaded_bytes / total_bytes) * 100 if total_bytes else 0
        remaining_bytes = total_bytes - downloaded_bytes
        remaining_time = f"{eta // 60}m {eta % 60}s" if eta else "Unknown"

        pbar.update(downloaded_bytes - pbar.n)  # Update the progress bar

        color = Fore.GREEN 

        pbar.set_description(
            f"{color}Downloading: {percentage:.2f}% | "
            f"{remaining_bytes / (1024 * 1024):.2f} MB left | "
            f"ETA: {remaining_time}{Style.RESET_ALL}"
        )

def download_playlist(playlist_url):
    ydl_opts = {
        'format': 'bestaudio/best',
        'outtmpl': os.path.join(DOWNLOAD_PATH, '%(title)s.%(ext)s'),
        'postprocessors': [{
            'key': 'FFmpegExtractAudio',
            'preferredcodec': 'mp3',
            'preferredquality': '192',
        }],
        'progress_hooks': [tqdm_hook],  # Add progress hook
    }
    if not os.path.exists(DOWNLOAD_PATH):
        os.makedirs(DOWNLOAD_PATH)

    with ytdlp.YoutubeDL(ydl_opts) as ydl:
        ydl.download([playlist_url])

if __name__ == '__main__':
    from tqdm import tqdm

    # Replace with your YouTube playlist URL
    playlist_url = 'https://www.youtube.com/playlist?list=PLyXHXSHxLqKy0UMV-iB3z0hPs3cbyOQYv'

    # Initialize progress bar
    pbar = tqdm(total=100, unit='B', unit_scale=True, desc="Downloading", bar_format='{l_bar}{bar}| {n_fmt}/{total_fmt} [{elapsed}<{remaining}]')

    download_playlist(playlist_url)

    pbar.close()
