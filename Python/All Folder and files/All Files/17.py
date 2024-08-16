
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


    


