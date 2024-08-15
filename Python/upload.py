import firebase_admin
from firebase_admin import credentials, storage
import os

# Initialize Firebase Admin SDK
cred = credentials.Certificate('serviceAccountKey.json')


firebase_admin.initialize_app(cred, {
    'storageBucket': 'tech-notes-a0af9.appspot.com'
})

bucket = storage.bucket()

# Function to upload a file to Firebase Storage
def upload_file(file_path):
    # Extract the file name from the file path
    file_name = os.path.basename(file_path)
    
    # Create a blob (object) in the storage bucket
    blob = bucket.blob(f'uploads/{file_name}')
    
    # Upload the file to Firebase Storage
    blob.upload_from_filename(file_path)
    
    # Get the public URL for the uploaded file
    blob.make_public()
    print(f'File uploaded successfully. Public URL: {blob.public_url}')

# Example usage: Upload a specific file from a directory
file_path = (r'serviceAccountKey.json')

upload_file(file_path)
