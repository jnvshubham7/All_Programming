import firebase_admin
from firebase_admin import credentials, storage, db
import os

# Initialize Firebase Admin SDK
cred = credentials.Certificate('serviceAccountKey.json')

# Initialize the Firebase app with both Storage and Database access
firebase_admin.initialize_app(cred, {
    'storageBucket': 'tech-notes-a0af9.appspot.com',
    'databaseURL': 'https://tech-notes-a0af9-default-rtdb.asia-southeast1.firebasedatabase.app'
})

# Reference the storage bucket
bucket = storage.bucket()

# Reference the Realtime Database root
db_ref = db.reference('files')

# Function to upload a file to Firebase Storage and store the name in Realtime Database
def upload_file(file_path):
    # Extract the file name from the file path
    file_name = os.path.basename(file_path)
    
    # Create a blob (object) in the storage bucket
    blob = bucket.blob(f'uploads/{file_name}')
    
    # Upload the file to Firebase Storage
    blob.upload_from_filename(file_path)
    
    # Make the file publicly accessible
    blob.make_public()
    
    # Get the public URL for the uploaded file
    public_url = blob.public_url
    
    # Store the file information in Firebase Realtime Database
    db_ref.push({
        'file_name': file_name,
        'url': public_url
    })
    
    print(f'File uploaded successfully. Public URL: {public_url}')
    print(f'File name "{file_name}" stored in Firebase Realtime Database.')

# Example usage: Upload a specific file from a directory
file_path = (r'test.md')

upload_file(file_path)
 