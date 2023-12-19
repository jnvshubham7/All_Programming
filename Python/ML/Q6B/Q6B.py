#!/usr/bin/env python
# coding: utf-8

# ### Design a housing price predictor taking only floor area (plot size), number of bedrooms, and number of bathrooms into considerations. Out of total 546 data , you may take 70% for designing the predictor and 30% for validating the design. The predictor design should be done using the following methods
# 
# ### b) Design Predictor using Batch Gradient Descent Algorithm, Stochastic Gradient Algorithm and mini batch Gradient Descent algorithms (determining minibatch size is your choice- here it could be 10, 20, 30 etc.) with and without feature scaling and compare their performances in terms of % error in prediction.

# In[1]:


# Whole Assignment will be done using numpy only 
import numpy as np

# pandas is only used to read the csv file since there is no function that allows us to read string data in numpy
import pandas as pd

#Reading data using pandas
data = pd.read_csv('Housing Price data set.csv')
data


# #### Now we will convert the pandas columns into numpy array because we are not allowed to use any other library.
# #### Note: We will take only those columns into consideration on which we are asked to do prediction.

# In[2]:


''' To convert them into numpy array, 
first we will take series object using data[column name] 
and then convert it into list using list() function 
and then finally we will create the numpy array.'''

# Feature Columns
PlotSize = np.array(list(data["lotsize"]))
Bedrooms = np.array(list(data["bedrooms"]))
Bathrooms = np.array(list(data["bathrms"]))

#Target Column
Price = np.array(list(data["price"]))


# Approch for preciding in Batch GDA, Stochastic GDA and Mini Batch GDA is similar since in Batch GDA, we take all the samples available for training, whereas in Stochastic GDA, only 1 random sample is taken and in Mini Batch GDA, a random set of batch( like 10 or 20 or 40 or 100 and so on..) is taken

# ### Now we will not write separate functions for all. Instead we will be writing a single function that take sample size as input and will give the output W. 
# #### 1. For Batch GDA, Sample Size will be 100% (i.e. all samples)
# #### 2. For Stochastic GDA, Sample Size will be 1
# #### 3. For Mini Batch GDA, Sample Size will be s (where s will be predefined)

# # PART 1

# Now we have to create the 3 predictors using GDA without feature scaling.
# For that we will create a function that will take feature as well as target columns as input as well as the sample_size and returns the predictor using GDA alogirthm.
# The function will also take the alpha (learning rate) as input.
# While calling this function we will take care that the data we pass is training data and later we also have to test our data for which we will write a separate function

# In[3]:


'''
1. X will be the numpy array of feature columns and Y will be target column
2. In this function we need to W to optimize it further so, we will use normal equation for that.
    And for that we have normal equation function from previous part A.
'''

def GDA(X, Y, learning_rate, sample_size, W):
    '''
        We have our previous W
        For GDA we have 
        new W = current W - (learning_rate/sample_size)*(∑ ((h(X)-Y).X*) ), note: ∑ is for sample_size
        Here, current W will be an numpy array and similarly X* will also be a numpy array
    For that we will simply iterate over X and add 1 over each row
    '''
    
    #Added 1 in each row as done in Normal Equation function
    X1=[]
    for i in range(len(X)):
        X1.append(list(np.insert(X[i],0,1)))
    X=np.array(X1)
    
    #Will pick s random samples from np array
    total_index=list(range(10))
    sample_index=[]
    for i in range(10):
        sample_index.append(np.random.choice(total_index))
        total_index.remove(sample_index[-1])
    
    #Calculating (∑ ((h(X)-Y).X*) ) and storing it into value and will be used later on
    value=np.zeros((len(W)),dtype=int)
    for i in range(len(sample_index)):
        current_index=sample_index[i]
        predicted_value=0
        for j in range(len(W)):
            predicted_value+=W[j]*X[current_index][j]
        original_value=Y[current_index]
        result=np.multiply(X[current_index],(predicted_value-original_value))
        value=np.add(value,result)
    
    #We will now overwrite value from (∑ ((h(X)-Y).X*) ) to (∑ ((h(X)-Y).X*) ) * (learning_rate/sample_size)
    value=np.multiply(value,learning_rate/sample_size,dtype=float)
                                   
    #Finally we have to subtract W and value np matrixes and return W as result
    W=np.subtract(W,value)                        
    return W

def LRNormalEquation(X, Y):
    X1=[]
    for i in range(len(X)):
        X1.append(list(np.insert(X[i],0,1)))
    X=np.array(X1)
    result1=np.dot(X.transpose(),X)
    result1=np.linalg.inv(result1)
    result2=np.dot(X.transpose(),Y)
    result=np.dot(result1,result2)
    return result

'''To call the function first we have to merge the numpy arrays into 1
So this function merges cells so that data for each index becomes as row for that part only'''
def mergeCells(cell):
    n=len(cell[0])
    m=len(cell)
    result=np.ones((n,m),dtype=int)
    for i in range(n):
        for j in range(m):
            result[i][j]=cell[j][i]
    return result


# ##### Now we have to divide our data into testing and trainging where test size will be 30%.
# ##### For that we will take first 70% for training and rest for testing
# 
# ##### We also have to predict data for which we can use the same predict function used in part A/

# In[4]:


train_size=int(0.7*len(PlotSize))
train_X=mergeCells([PlotSize[:train_size], Bedrooms[:train_size], Bathrooms[:train_size]])
test_X=mergeCells([PlotSize[train_size:], Bedrooms[train_size:], Bathrooms[train_size:]])
train_Y=Price[:train_size]
test_Y=Price[train_size:]

def predict(X,Y,W):
    error=0
    for i in range(len(Y)):
        predicted=abs(W[0] + W[1]*X[i][0] + W[2]*X[i][1] + W[3]*X[i][2])
        actual=abs(Y[i])
        error+=abs(actual-predicted)/actual
    error=error/len(Y)
    error=error*100
    return error


# Now we have to predict for testing data. The below predict function will take testing data and W and return the mean squared error.

# In[5]:


#Defining epochs and learning rate for 3 algorithms
epochs=1000
learning_rate=0.0000000001


# #### Batch Gradient Descent Algorithm without feature scaling

# In[6]:


W=LRNormalEquation(train_X,train_Y)
for i in range(epochs):
    W=GDA(train_X,train_Y,learning_rate,len(train_Y),W)
print("Model using Batch GDA without feature scaling is given below")
print(round(W[0]),"+",round(W[1]),"* PlotSize +",round(W[2]),"* Bedrooms +",round(W[3]),"* Bathrooms")
print("% error in the model on testing data using Batch GDA without feature scaling is",end=" ")
print(round(predict(test_X,test_Y,W),10),end="%")


# #### Stochastic Gradient Descent Algorithm without feature scaling

# In[7]:


W=LRNormalEquation(train_X,train_Y)
for i in range(epochs):
    W=GDA(train_X,train_Y,learning_rate,1,W)
print("Model using Stochastic GDA without feature scaling is given below")
print(round(W[0]),"+",round(W[1]),"* PlotSize +",round(W[2]),"* Bedrooms +",round(W[3]),"* Bathrooms")
print("% error in the model on testing data using Stochastic GDA without feature scaling is",end=" ")
print(round(predict(test_X,test_Y,W),10),end="%")


# #### Mini Batch Gradient Descent Algorithm without feature scaling

# In[8]:


batch_size=50
W=LRNormalEquation(train_X,train_Y)
for each in range(epochs):
    W=GDA(train_X,train_Y,learning_rate,batch_size,W)
print("Model using Mini Batch GDA without feature scaling is given below")
print(round(W[0]),"+",round(W[1]),"* PlotSize +",round(W[2]),"* Bedrooms +",round(W[3]),"* Bathrooms")
print("% error in the model on testing data using Stochastic GDA without feature scaling is",end=" ")
print(round(predict(test_X,test_Y,W),10),end="%")


# # PART 2

# Now we have to create the 3 predictors using GDA with feature scaling.
# Since we have to GDA with feature so same functions can be use, we just have to normalize the data and call the functions to make error function more optimal.

# In[9]:


#First of all we will normalize the data and then split it.
def FeatureScaling(data):
    #For every entry in data we have to upadte entry as entry-mean(data)/max(data)-min(data)
    meanData=data.mean()
    maxData=data.max()
    minData=data.min()
    for i in range(len(data)):
        data[i]=(data[i]-meanData)/(maxData-minData)
    return data

# We have to take columns as float datatype
# Feature Columns
PlotSize = np.array(list(data["lotsize"]),dtype=float)
Bedrooms = np.array(list(data["bedrooms"]),dtype=float)
Bathrooms = np.array(list(data["bathrms"]),dtype=float)

#Target Column
Price = np.array(list(data["price"]),dtype=float)

#We have to scale the feature columns
PlotSize = FeatureScaling(PlotSize)
Bedrooms = FeatureScaling(Bedrooms)
Bathrooms = FeatureScaling(Bathrooms)


# The data has been normalized using feature scaling using mean normalization.
# So, now we just have to call the function

# In[10]:


#We also have to upgrade the mergecells function to take make float np array
def mergeCells(cell):
    n=len(cell[0])
    m=len(cell)
    result=np.ones((n,m),dtype=float)
    for i in range(n):
        for j in range(m):
            result[i][j]=cell[j][i]
    return result

train_size=int(0.7*len(PlotSize))
train_X=mergeCells([PlotSize[:train_size], Bedrooms[:train_size], Bathrooms[:train_size]])
test_X=mergeCells([PlotSize[train_size:], Bedrooms[train_size:], Bathrooms[train_size:]])
train_Y=Price[:train_size]
test_Y=Price[train_size:]

epochs=1000
learning_rate=0.0000000001


# #### Batch Gradient Descent Algorithm with feature scaling

# In[11]:


W=LRNormalEquation(train_X,train_Y)
for i in range(epochs):
    W=GDA(train_X,train_Y,learning_rate,len(train_Y),W)
print("Model using Batch GDA with feature scaling is given below")
print(round(W[0],2),"+",round(W[1],2),"* PlotSize +",round(W[2],2),"* Bedrooms +",round(W[3],2),"* Bathrooms")
print("% error in the model on testing data using Batch GDA with feature scaling is",end=" ")
print(round(predict(test_X,test_Y,W),10),end="%")


# #### Stochastic Gradient Descent Algorithm with feature scaling

# In[12]:


W=LRNormalEquation(train_X,train_Y)
for i in range(epochs):
    W=GDA(train_X,train_Y,learning_rate,1,W)
print("Model using Stochastic GDA with feature scaling is given below")
print(round(W[0]),"+",round(W[1]),"* PlotSize +",round(W[2]),"* Bedrooms +",round(W[3]),"* Bathrooms")
print("% error in the model on testing data using Stochastic GDA with feature scaling is",end=" ")
print(round(predict(test_X,test_Y,W),10),end="%")


# #### Mini Batch Gradient Descent Algorithm with feature scaling

# In[13]:


batch_size=50
W=LRNormalEquation(train_X,train_Y)
for each in range(epochs):
    W=GDA(train_X,train_Y,learning_rate,batch_size,W)
print("Model using Mini Batch GDA with feature scaling is given below")
print(round(W[0]),"+",round(W[1]),"* PlotSize +",round(W[2]),"* Bedrooms +",round(W[3]),"* Bathrooms")
print("% error in the model on testing data using Stochastic GDA with feature scaling is",end=" ")
print(round(predict(test_X,test_Y,W),10),end="%")


# # CONCLUSION

# ##### We have % errors for GDA with and without feature scaling
# 
# ##### % Error for Batch GDA without Feature Scaling = 22.2707108021%
# ##### % Error for Stochastic GDA without Feature Scaling = 20.4449580602%
# ##### % Error for Mini Batch GDA without Feature Scaling = 21.5504635503%
# 
# ##### % Error for Batch GDA with Feature Scaling = 18.6664900141%
# ##### % Error for Stochastic GDA with Feature Scaling = 18.666489842%
# ##### % Error for Mini Batch GDA with Feature Scaling = 18.6664900111%
# 
# ### 1.) % error is less when the data is normalized.
# ### 2.) % error is minimum in stochastic GDA and maximum in batch GDA. % error in mini batch GDA is in between that of both. 
# 
# ##### The arrangement becomes:
# 
# ## % error : GDA with Feature Scaling < GDA without Feature Scaling
# ## % error : Stochistic GDA < Mini Batch GDA < Batch GDA
# 
# # Maximum Error : 22.2707108021%
# # Minimum Error : 18.666489842%
# 
# 
# 
# #### Note: I have taken learning_rate=0.0000000001, epochs=1000 and batch_size as 50 for minibatch GDA.
