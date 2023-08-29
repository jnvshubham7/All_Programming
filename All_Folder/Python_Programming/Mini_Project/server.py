# Federated Learning with socket programming for MNIST ANN classification

import socket
import pickle
import numpy as np
from tensorflow import keras
from tensorflow.keras.datasets import mnist
from tensorflow.keras.utils import to_categorical

# Prepare the dataset
(x_train, y_train), (x_test, y_test) = mnist.load_data()
x_train = x_train.reshape(-1, 28*28).astype('float32') / 255.0
x_test = x_test.reshape(-1, 28*28).astype('float32') / 255.0
y_train = to_categorical(y_train)
y_test = to_categorical(y_test)

num_devices = 2
num_rounds = 10
batch_size = 32
learning_rate = 0.1
num_hidden_units = 128
num_classes = 10

# Define the ANN model
def create_model():
    model = keras.Sequential([
        keras.layers.Dense(num_hidden_units, activation='relu', input_shape=(784,)),
        keras.layers.Dense(num_classes, activation='softmax')
    ])
    model.compile(optimizer=keras.optimizers.SGD(lr=learning_rate),
                  loss='categorical_crossentropy',
                  metrics=['accuracy'])
    return model

# Set up the server
HOST = 'localhost'
PORT = 8000

server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_socket.bind((HOST, PORT))
server_socket.listen()

# Accept connections from devices
devices = []
for i in range(num_devices):
    conn, addr = server_socket.accept()
    devices.append(conn)

# Train the model via Federated Learning
model = create_model()
for round in range(num_rounds):
    print('Round:', round)
    # Send the current model to all devices
    for conn in devices:
        conn.send(pickle.dumps(model.get_weights()))

    # Train the model on local data and send updated weights to server
    weights = []
    for conn in devices:
        # Receive local data from device
        indices = pickle.loads(conn.recv(1024))
        x = x_train[indices]
        y = y_train[indices]

        # Train the model on local data
        model.train_on_batch(x, y)

        # Get the updated weights and send back to server
        weights.append(model.get_weights())

    # Aggregate the updated weights and update the shared model
    avg_weights = np.mean(weights, axis=0)
    model.set_weights(avg_weights)

# Evaluate the performance of the shared model on a test dataset
score = model.evaluate(x_test, y_test, verbose=0)
print('Test loss:', score[0])
print('Test accuracy:', score[1])