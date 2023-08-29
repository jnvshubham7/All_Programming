#!/usr/bin/env python
# coding: utf-8

# ### Design a housing price predictor taking only floor area (plot size), number of bedrooms, and number of bathrooms into considerations. Out of total 546 data , you may take 70% for designing the predictor and 30% for validating the design. The predictor design should be done using the following methods
# 
# ### a) Normal equations  with  and without regularization and compare their performances in terms of % error in prediction.

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


# # PART 1

# Now we have to create the predictor using normal equation without regularisation.
# For that we will create a function that will take feature as well as target columns as input and returns the predictor using normal equations.
# While calling this function we will take care that the data we pass is training data and later we also have to test our data for which we will write a separate function

# In[3]:


'''X will be the numpy array of feature columns and Y will be target column'''
def LRNormalEquation(X, Y):
    '''
        So X will be like:
        [X1, X2, X3], m=1,
        [X1, X2, X3], m=2,
        [X1, X2, X3], m=3,
        .................
    We need X of form:
        [1, X1, X2, X3], m=1,
        [1, X1, X2, X3], m=2,
        [1, X1, X2, X3], m=3,
        .................
    For that we will simply iterate over X and add 1 over each row
    '''
    
    #Appending 1 at position 0 for every row
    X1=[]
    for i in range(len(X)):
        X1.append(list(np.insert(X[i],0,1)))
    X=np.array(X1)
    
    #Now we have formula for result of model i.e. W = (X^t.X)^-1.X^t.Y, where ^t is transpose and ^-1 is inverse
    #Result 1 will store first half part and similarly Result 2 will store the later half
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


# Now we have to divide our data into testing and trainging where test size will be 30%.
# For that we will take first 70% for training and rest for testing

# In[4]:


train_size=int(0.7*len(PlotSize))
train_X=mergeCells([PlotSize[:train_size], Bedrooms[:train_size], Bathrooms[:train_size]])
test_X=mergeCells([PlotSize[train_size:], Bedrooms[train_size:], Bathrooms[train_size:]])
train_Y=Price[:train_size]
test_Y=Price[train_size:]
W=LRNormalEquation(train_X,train_Y)
print("Model using normal equation without regularization is given below")
print(round(W[0]),"+",round(W[1]),"* PlotSize +",round(W[2]),"* Bedrooms +",round(W[3]),"* Bathrooms")


# Now we have to predict for testing data. The below predict function will take testing data and W and return the % error.

# In[5]:


def predict(X,Y,W):
    error=0
    for i in range(len(Y)):
        predicted=abs(W[0] + W[1]*X[i][0] + W[2]*X[i][1] + W[3]*X[i][2])
        actual=abs(Y[i])
        error+=abs(actual-predicted)/actual
    error=error/len(Y)
    error=error*100
    return error
print("% error in the model on testing data using normal equation without regularzation is",end=" ")
print(round(predict(test_X,test_Y,W),2),end="%")


# # PART 2

# Now we have to create the predictor using normal equation with regularisation.
# For that we will create a function that will take feature as well as target columns as input and returns the predictor using normal equations with regularization.
# While calling this function we will take care that the data we pass is training data and later we also have to test our data for which we will write a separate function

# In[6]:


'''X will be the numpy array of feature columns, Y will be target column, and R will be the reguriser value'''
def LRNormalEquationRegularization(X, Y, R):
    '''
        So X will be like:
        [X1, X2, X3], m=1,
        [X1, X2, X3], m=2,
        [X1, X2, X3], m=3,
        .................
    We need X of form:
        [1, X1, X2, X3], m=1,
        [1, X1, X2, X3], m=2,
        [1, X1, X2, X3], m=3,
        .................
    For that we will simply iterate over X and add 1 over each row
    '''
    
    '''
    Further we need REG defined as below (R is the regulizer value)
        [0 0 0 0], m=1.
        [0 R 0 0], m=2,
        [0 0 R 0], m=3,
        ..............
    '''
    
    #Appending 1 at position 0 for every row
    X1=[]
    for i in range(len(X)):
        X1.append(list(np.insert(X[i],0,1)))
    X=np.array(X1)
    
    REG=np.zeros((len(X[0]), len(X[0])),dtype=int)
    for i in range(1, len(REG)):
        for j in range(1, len(REG)):
            if i==j:
                REG[i][j]=R
                break
    
    #Now we have formula for result of model i.e. W = (X^t.X + REG)^-1.X^t.Y, where ^t is transpose and ^-1 is inverse    
    #Result 1 will store first half part and similarly Result 2 will store the later half
    result1=np.dot(X.transpose(),X)
    result1=np.add(result1,REG)
    result1=np.linalg.inv(result1)
    result2=np.dot(X.transpose(),Y)
    result=np.dot(result1,result2)
    return result


# As done for the first part, now we have to divide our data into testing and trainging where test size will be 30%.
# For that we will take first 70% for training and rest for testing

# In[7]:


train_size=int(0.7*len(PlotSize))
train_X=mergeCells([PlotSize[:train_size], Bedrooms[:train_size], Bathrooms[:train_size]])
test_X=mergeCells([PlotSize[train_size:], Bedrooms[train_size:], Bathrooms[train_size:]])
train_Y=Price[:train_size]
test_Y=Price[train_size:]
W=LRNormalEquationRegularization(train_X,train_Y,1000)
print("Model using normal equation with regularization is given below")
print(round(W[0]),"+",round(W[1]),"* PlotSize +",round(W[2]),"* Bedrooms +",round(W[3]),"* Bathrooms")


# Now we have to predict for testing data.

# In[8]:


print("% error in the model on testing data using normal equation with regularization (when R is 1000) is",end=" ")
print(round(predict(test_X,test_Y,W),2),end="%")


# # CONCLUSION

# In[9]:


#error in prediction without regularisation is 22.42%
error_without_reg=22.42

#let us assume this is more good model than that with regularization
currentBest=1

#We will iterate for -1000 to 1000 as Reg value and cal error
#If error in any of them is less then currentBest will be changed

error_with_reg=101
index=-1000
for R in range(-1000,1001):
    current_error=predict(test_X,test_Y,LRNormalEquationRegularization(train_X,train_Y,R))
    if current_error<error_without_reg:
        currentBest=2
        if current_error<error_with_reg:
            index=R
        error_with_reg=min(error_with_reg,current_error)
print("Error in case without regularization is",error_without_reg,end=" %\n")
print("Least error in case of regularizaion is",round(error_with_reg,2),"%, when R value is",index)
if currentBest==1:
    print("Normal Equation Model without regularization has less % error as compared to the normal equation model with regularization")
else:
    print("Normal Equation Model with regularization has less % error as compared to the normal equation model without regularization")

