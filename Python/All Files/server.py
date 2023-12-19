# #!/usr/bin/python           # This is server.py file

# import socket               # Import socket module

# s = socket.socket()         # Create a socket object
# host = socket.gethostname() # Get local machine name
# port = 12345                # Reserve a port for your service.
# s.bind((host, port))        # Bind to the port

# s.listen(5)                 # Now wait for client connection.
# while True:
#    c, addr = s.accept()     # Establish connection with client.
#    print ('Got connection from', addr)
#    c.send('Thank you for connecting')
#    c.close()                # Close the connection



#write server.py code in python

import socket
import sys

s=socket.socket()
host=socket.gethostname()
port=12345
s.bind((host,port))
s.listen(5)
while True:

    c,addr=s.accept()
    print("got connection from",addr)
    c.send("thank you for connecting")
    c.close()
    print("connection closed")
    sys.exit()
    #c.send("thank you for connecting")
    #c.close()
    #print("connection closed")
    #sys.exit()


#!/usr/bin/python

