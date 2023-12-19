# Importing the 'hashlib' library to use the Hashing Algorithm to hash the Key 
import hashlib

# Importing the 'binascii' library to encode the HMAC Signature 
import binascii

# Function to encode the HMAC Signature
# Binary data is converted to ASCII String Format  
def base64encode(s):
    encoded = binascii.b2a_base64(s, newline=False)
    return encoded

# Generation of Input and Output Signatures respectively
"""
Key = Padded with zeros on the left so that the result becomes 'b' bits in length
ipad = 00110110 (36 in Hexadecimal) repeated b/8 times
opad = 01011100 (5C in Hexadecimal) repeated b/8 times
"""
# bytes() converts an object to an immutable byte-represented object of the given size and data
ipad = 0x36
inputSignature = bytes((Key ^ ipad) for Key in range(256))
opad = 0x5C
outputSignature = bytes((Key ^ opad) for Key in range(256))

class HMAC:
    # Block Size of the Message is specified as 64 bits
    blocksize = 64

    # Constructor to initialize the attributes(key, message, digestmod) of the class
    """
    key = Secret Key shared between the Sender and the Receiver
    msg = Message to be encoded
    digestmod = Hashing Algorithm 
    
    """
    # self represents the instance of the class
    def _init_(self, key, msg=None, digestmod=''):

        # Returns True, if the object(digestmod) appears to be callable
        if callable(digestmod):
            self.messageDigest = digestmod

        # Returns True, if digestmod is a String, otherwise False
        elif isinstance(digestmod, str):
            """
            hashlib.new() takes in two arguments 
            1) String Name of the Hashing Algorithm
            2) Data to be hashed
            
            """
            self.messageDigest = lambda d=b'': hashlib.new(digestmod, d)
        
        # If digestmod is not a String
        else:
            self.messageDigest = lambda d=b'': digestmod.new(d)

        # 'self' keyword is used to access the attributes and methods of the class HMAC
        # Assigning the variables, 'input' and 'output' to the return value of the function, 'messageDigest()'
        self.input = self.messageDigest()
        self.output = self.messageDigest()

        # hasattr() returns True if the specified object has the specified attribute, otherwise False
        # 'block_size' is the internal block size of the hash algorithm in bytes
        if hasattr(self.input, 'block_size'):
            blocksize = self.input.block_size
            if blocksize < 16:
                blocksize = self.blocksize

        else:
            blocksize = self.blocksize
        self.block_size = blocksize

        if len(key) > blocksize:
            key = self.messageDigest(key).digest()

        # ljust() left aligns the string using a specified character
        # If there is a missing space in the key, it is padded with b'\0' to the right of the key
        key = key.ljust(blocksize, b'\0')

        """
          translate() returns a string where some specified characters are replaced with 
          the characters described in a dictionary, or in a mapping table
        """
        # Variable 'input' is updated with the translated value of the Input Signature
        self.input.update(key.translate(inputSignature))

        # Variable 'output' is updated with the translated value of the Output Signature
        self.output.update(key.translate(outputSignature))

        # If message is not specified 
        if msg is not None:
            self.update(msg)

    # @property is a decorator that makes usage of getters and setters much easier
    # A getter method returns the value of the attribute
    # A setter method takes a parameter and assigns it to the attribute.
    @property

    # Returns the Output Signature
    def outer(self):
        return self.output

    # Updates the existing value with the new one 
    def update(self, msg):
        self.input.update(msg)

    # Copies the Output Signature into the variable 'h'
    # Updates the value in 'h' with the hash of the Input Signature and returns it
    def current(self):
        h = self.output.copy()
        h.update(self.input.digest())
        return h

    # Assigns the return value of the function 'current()' to the variable 'h' and returns its hash
    def digest(self):
        h = self.current()
        return h.digest()

# Calls the HMAC class and passes in the key, message and digestmod 
# Returns the HMAC Signature 
def hmacGenerator(key, msg=None, digestmod=''):
    return HMAC(key, msg, digestmod)

# Taking the Message and Secret Key as inputs from the User
msgInput = input("Enter the Message = ")
keyInput = input("Enter the Secret Key = ")

# bytes() converts an object to an immutable byte-represented object of the given size and data
message = bytes(msgInput, 'utf-8')
key = bytes(keyInput, 'utf-8')

# Generating the HMAC Signature
# digest() returns the encoded data in byte format
signature = base64encode(hmacGenerator(key, message, hashlib.sha256).digest())

# Decoding the bytes object
HMAC = signature.decode("utf-8")

# Displaying the HMAC Signature
print("HMAC Signature =", HMAC)