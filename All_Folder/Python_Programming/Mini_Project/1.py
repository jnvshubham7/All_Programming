import socket

# create a server socket
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# bind the socket to a specific address and port
server_address = ('localhost', 12345)
server_socket.bind(server_address)

# listen for incoming connections
server_socket.listen(5)

# keep track of all clients
clients = []

# keep accepting new clients
while True:
    print("Waiting for new connection...")
    client_socket, client_address = server_socket.accept()
    print(f"Accepted connection from {client_address}")
    clients.append(client_socket)
    # receive data from the client and process it
    while True:
        data = client_socket.recv(1024)
        if not data:
            break
        # do something with the received data
        # ...
    client_socket.close()
    print(f"Connection with {client_address} closed")

server_socket.close()
