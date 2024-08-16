 



##### import matplotlib.pyplot as plt
import os
import keras
import pickle
import numpy as np
import tensorflow as tf
from tensorflow import keras
from keras import optimizers
import matplotlib.pyplot as plt
from sklearn.metrics import confusion_matrix
from sklearn.model_selection import train_test_split
from sklearn.metrics import classification_report, confusion_matrix


from tensorflow.keras import layers
from tensorflow.keras.models import Sequential, load_model
from tensorflow.keras.callbacks import EarlyStopping, ModelCheckpoint
from tensorflow.keras.preprocessing.image import ImageDataGenerator
from tensorflow.keras.applications import VGG16,VGG19, ResNet50, ResNet101, ResNet152, EfficientNetB0,EfficientNetB4, InceptionV3
from tensorflow.python.keras.layers import Dense, Flatten, Conv2D, MaxPooling2D, GlobalAveragePooling2D, Dropout




print(tf.__version__)
2.12.0
path = "/kaggle/input/deepfake-and-real-images/Dataset/"
train_dir = path + 'Train'
test_dir = path + 'Test'
validation_dir = path + 'Validation'
def check_dist(dir):
    print(f"{dir.split('/')[-1]} dataset")
    if os.path.exists(dir):
        real_path = os.path.join(dir,'Real')
        fake_path = os.path.join(dir,'Fake')
        print(f"Real data count: {len(os.listdir(real_path))}")
        print(f"Fake data count: {len(os.listdir(fake_path))}")
    else:
        print("Directory Not Found")
    print()




%%time
IMG_SIZE = (224, 224)
input_shape=(224,224,3)
batch_size = 128
seed = 7

# ig = ImageDataGenerator()
# igt = ImageDataGenerator(validation_split=0.6)
# igv = ImageDataGenerator(validation_split=0.5)

ig = ImageDataGenerator(rescale=1./255.)
igt = ImageDataGenerator(rescale=1./255.,validation_split=0.6)
igv = ImageDataGenerator(rescale=1./255.,validation_split=0.5)
train_flow = igt.flow_from_directory(
    train_dir,
    target_size=IMG_SIZE,
    batch_size=batch_size,
    class_mode='categorical',
    subset='training',
    seed=seed
)

# ig1 = ImageDataGenerator(rescale=1./255.)
valid_flow = igv.flow_from_directory(
    validation_dir,
    target_size=IMG_SIZE,
    batch_size=batch_size,
    class_mode='categorical',
    subset='training',
    seed=seed
)

test_flow = ig.flow_from_directory(
    test_dir,
    target_size=IMG_SIZE,
    batch_size=1,
    shuffle = False,
    class_mode='categorical',
    seed=seed
)

train_flow.class_indices



model_checkpoint = ModelCheckpoint(filepath='/kaggle/working/efficient_128_v0.h5', save_best_only=True)
early_stopping = EarlyStopping(monitor='val_acc', patience=5, restore_best_weights=True)

class PredictionCallback(tf.keras.callbacks.Callback): 
    def on_epoch_end(self, epoch, logs={}):
        y_pred = self.model.predict(valid_flow[0][0])
        y_test = valid_flow[0][1]
        y_pred_labels = np.argmax(y_pred, axis=1)
        y_test_labels = np.argmax(y_test, axis=1)
        cfm = confusion_matrix(y_test_labels, y_pred_labels)
        print(cfm)        
base_model = ResNet50(weights='imagenet', include_top=False, input_shape=input_shape)
for i, layer in enumerate(base_model.layers):
    print(i,layer)
# base_model.summary()




def build_model():
    base_model = ResNet50(weights='imagenet', include_top=False, input_shape=input_shape)
    
    
    for layer in base_model.layers[:150]:
        layer.trainable = False

    model = Sequential([base_model,
                        layers.GlobalAveragePooling2D(),
                        layers.Dropout(0.4),
                        layers.Dense(1024,activation='relu'),
                        layers.Dropout(0.4),
                        layers.Dense(2, activation='softmax')
                        ])
    
    model.compile(optimizer=optimizers.Adam(learning_rate=0.003),
                  loss='categorical_crossentropy',
                  metrics=['accuracy']
                 )
    return model

model = build_model()
model.summary()



%%time

history1 = model.fit(train_flow,
    epochs = 15,
    validation_data =valid_flow,
    callbacks=[model_checkpoint, early_stopping]
)

with open('/kaggle/working/history_efficient_128.pkl', 'wb') as file:
    pickle.dump(history.history, file)



model.evaluate(test_flow)
10905/10905 [==============================] - 116s 11ms/step - loss: 0.7258 - accuracy: 0.7483
[0.7257922887802124, 0.7482805848121643]
from sklearn.metrics import classification_report, confusion_matrix

y_pred = model.predict(test_flow)
y_true = test_flow.classes
y_pred_classes = np.argmax(y_pred, axis=1)

class_labels = list(test_flow.class_indices.keys())

print("Confusion Matrix:")
print(confusion_matrix(y_true, y_pred_classes))

print("\nClassification Report:")
print(classification_report(y_true, y_pred_classes, target_names=class_labels))



# Plot training history
plt.figure(figsize=(12, 4))

# Plot training & validation loss values
plt.subplot(1, 2, 1)
plt.plot(history1.history['loss'], label='Training Loss')
plt.plot(history1.history['val_loss'], label='Validation Loss')
plt.title('Model Loss')
plt.xlabel('Epoch')
plt.ylabel('Loss')
plt.legend()

# Plot training & validation accuracy values
plt.subplot(1, 2, 2)
plt.plot(history1.history['accuracy'], label='Training Accuracy')
plt.plot(history1.history['val_accuracy'], label='Validation Accuracy')
plt.title('Model Accuracy')
plt.xlabel('Epoch')
plt.ylabel('Accuracy')
plt.legend()

plt.show()




import matplotlib.pyplot as plt
img,label = test_flow[10];
label_ = label.argmax(axis=1)

res = model.predict(img)

class_ = res.argmax(axis=1)
if class_[0] == 0:
    if label_ == 0:
        print("Actual class is fake, predicted class is fake")
    else:
        print("Actual class is real, predicted class is fake")
else:
    if label_ == 0:
        print("Actual class is fake, predicted class is real")
    else:
        print("Actual class is real, predicted class is real")
        
plt.imshow(img[0])
plt.show()

