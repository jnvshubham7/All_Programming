import socket

ssFT = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
ssFT.bind((socket.gethostname(), 8756))
ssFT.listen(1)
while True:
    (conn, address) = ssFT.accept()
    text_file = 'fileProj.txt'

    #Receive, output and save file
    with open(text_file, "wb") as fw:
        print("Receiving..")
        while True:
            print('receiving')
            data = conn.recv(1024)
            print('Received: ', data.decode('utf-8'))
            if not data:
                print('Breaking from file write')
                break
            fw.write(data)
            print('Wrote to file', data.decode('utf-8'))
        fw.close()
        print("Received..")

    #Append and send file
    print('Opening file ', text_file)
    with open(text_file, 'ab+') as fa:
        print('Opened file')
        print("Appending string to file.")
        string = b"Append this to file."
        fa.write(string)
        fa.seek(0, 0)
        print("Sending file.")
        while True:
            data = fa.read(1024)
            conn.send(data)
            if not data:
                break
        fa.close()
        print("Sent file.")
    break
ssFT.close()