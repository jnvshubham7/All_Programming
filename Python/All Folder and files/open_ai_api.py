import httpx
from openai import OpenAI
from openai import OpenAIError, RateLimitError, APIError

# Replace 'your-api-key' with your actual API key
api_key = 'your-api-key

# Replace with your actual proxy URL and port if needed
proxy_url = "http://172.31.2.3:8080"

# Create a custom HTTP client with proxy settings (if required)
proxy_client = httpx.Client(
    proxies={
        "http://": proxy_url,
        "https://": proxy_url,
    },
    timeout=60.0  # Increase timeout duration if necessary
)

# Initialize OpenAI client with the custom HTTP client
client = OpenAI(api_key=api_key, http_client=proxy_client)

# Open your audio file
audio_file = open("Recording.m4a", "rb")

# Create the transcription
try:
    transcription = client.audio.transcriptions.create(
        model="whisper-1",
        file=audio_file
    )
    print(transcription.text)
except RateLimitError as e:
    print(f"Rate limit exceeded: {e}")
except APIError as e:
    print(f"API error occurred: {e}")
except OpenAIError as e:
    print(f"OpenAI error occurred: {e}")
except Exception as e:
    print(f"An unexpected error occurred: {e}")
finally:
    audio_file.close()
