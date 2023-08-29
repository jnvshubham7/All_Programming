# #!/usr/bin/python           # This is client.py file

# import socket               # Import socket module

# s = socket.socket()         # Create a socket object
# host = socket.gethostname() # Get local machine name
# port = 12345                # Reserve a port for your service.

# s.connect((host, port))
# print (s.recv(1024))
# s.close()                     # Close the socket when done



#write client.py code in python 

import socket
import sys

s=socket.socket()
host=socket.gethostname()
port=12345
s.connect((host,port))
#print some message


print(s.recv(1024))



s.close()
sys.exit()
#!/usr/bin/python

