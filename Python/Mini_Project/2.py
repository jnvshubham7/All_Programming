import socket

# create a client socket
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# connect to the server
server_address = ('localhost', 12345)
client_socket.connect(server_address)

# send some data to the server
client_socket.sendall(b"Hello, server!")

# receive data from the server
data = client_socket.recv(1024)

# do something with the received data
# ...

client_socket.close()
