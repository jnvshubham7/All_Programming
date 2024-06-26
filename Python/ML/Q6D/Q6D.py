# Code by Shubham Kumar Bhokta IIT2020007, IIIT Allahabad
# In this code I have implemented locally weighted linear regression, feature Scaled and regularised batch gradient linear regression, 
# feature Scaled and regularised Stochastic gradient linear regression and feature Scaled and regularised mini batch gradient linear regression. 
# I have also compared the Mininum absulute percentage error of all of these.

import numpy as np
import pandas as pd
import math

def calculate_error(MatrixY, Y_pred):
    error = 0
    for i in range(len(MatrixY)):
        error += abs(MatrixY[i] - Y_pred[i]) / MatrixY[i]
    error = error / len(MatrixY)
    return error * 100

def kernel(MatrixX, xi, HyperParameterTau):
    return np.exp(-np.sum((xi - MatrixX) ** 2, axis = 1) / (2 * HyperParameterTau * HyperParameterTau))

def LocallyWeightedLR(MatrixX, xi, MatrixY, HyperParameterTau):
	TransposeMatrixX = np.transpose(MatrixX)
	W = kernel(MatrixX, xi, HyperParameterTau)
	MatrixXTransposeW = TransposeMatrixX * W
	MatrixXTransposeWX = np.matmul(MatrixXTransposeW, MatrixX)
	InverseMatrixXTransposeWX = np.linalg.pinv(MatrixXTransposeWX)
	InverseMatrixXTransposeWXMatrixXTransposeW = np.matmul(InverseMatrixXTransposeWX, MatrixXTransposeW)
	InverseMatrixXTransposeWXMatrixXTransposeWY = np.matmul(InverseMatrixXTransposeWXMatrixXTransposeW, MatrixY)
	InverseMatrixXTransposeWXMatrixXTransposeWYTranspose = np.transpose(InverseMatrixXTransposeWXMatrixXTransposeWY)
	return InverseMatrixXTransposeWXMatrixXTransposeWYTranspose.dot(xi)

input_data = pd.read_csv('Housing Price data set.csv', usecols = ["price", "lotsize", "bedrooms", "bathrms"])
FloorArea = input_data['lotsize']
NoOfBedrooms = input_data['bedrooms']
NoOfBathrooms = input_data['bathrms']
MatrixY = input_data['price']
MatrixY = np.array(MatrixY)
MatrixY = MatrixY.reshape(MatrixY.shape[0], 1)

# Performing feature scanning on FloorArea
FloorArea_Mean = np.mean(FloorArea)
FloorArea_Max = max(FloorArea)
FloorArea_Min = min(FloorArea)
FloorArea_Scaled = []
for i in FloorArea:
	FloorArea_Scaled.append((i - FloorArea_Mean) / (FloorArea_Max - FloorArea_Min))

MatrixX = []
for i in range(len(FloorArea)):
	MatrixX.append([1, FloorArea_Scaled[i], NoOfBedrooms[i], NoOfBathrooms[i]])
MatrixX = np.array(MatrixX)

HyperParameterTau = 0.00005
print("Using Locally Weighted Linear Regression for Tau = " + str(HyperParameterTau))
pred = []
for i in range(MatrixX.shape[0]):
	y_pred = LocallyWeightedLR(MatrixX, MatrixX[i], MatrixY, HyperParameterTau)
	pred.append(y_pred)
print("Mean absolute percentage error is : " + str(calculate_error(MatrixY,pred)))
print()

Price = input_data['price']

#segmenting the features
FeaturesTrain = []
for i in range(383):
	FeaturesTrain.append([1, FloorArea_Scaled[i], NoOfBedrooms[i], NoOfBathrooms[i]])
PriceTrain = Price[:383]
PriceTest = []
FeaturesTest = []
for i in range(383, len(Price)):
	FeaturesTest.append([1, FloorArea_Scaled[i], NoOfBedrooms[i], NoOfBathrooms[i]])
	PriceTest.append(Price[i])
m = len(FeaturesTrain)

# Function to calculate Slope to find coefficients
def Slope(Coeff, FeaturesTrain, PriceTrain, ind):
	Error = 0
	for i in range(len(FeaturesTrain)):
		itr = 0
		for j in range(len(Coeff)):
			itr = itr + Coeff[j] * FeaturesTrain[i][j]
		Error += (itr - PriceTrain[i]) * FeaturesTrain[i][ind]
	return Error

# Using scaled batch gradient with regularisation
print("Using scaled batch gradient with regularisation")
LearningRate = 0.001
LambdaParameter = -49
Coeff = [0, 0, 0, 0]
print("Initial coefficients: ")
print(Coeff)
for epochs in range(5000):
	TempCoeff = Coeff.copy()
	for j in range(len(Coeff)):
		if (j == 0):
			TempCoeff[j] = TempCoeff[j] - ((LearningRate / m) * (Slope(Coeff, FeaturesTrain, PriceTrain, j)))	
		else:
			TempCoeff[j] = (1 - LearningRate * LambdaParameter / m) * TempCoeff[j] - ((LearningRate / m) * (Slope(Coeff, FeaturesTrain, PriceTrain, j)))
	Coeff = TempCoeff.copy()
print("Final coefficients are:")
print(Coeff)

# Finding Mean absolute percentage error.
Error = 0
for i in range(len(FeaturesTest)):
	predicted = 0
	for j in range(len(Coeff)):
	  	predicted = predicted + Coeff[j] * FeaturesTest[i][j]
	Error += abs(predicted - PriceTest[i]) / PriceTest[i]
Error = (Error / len(FeaturesTest)) * 100
print("Mean absolute percentage error is : " + str(Error))
print()

def SlopeStoch(Coeff,FeaturesTrain,ActualVal,ind):
	itr = 0
	for j in range(len(Coeff)):
		itr = itr + Coeff[j]*FeaturesTrain[j]
	return (itr - ActualVal) * FeaturesTrain[ind]

# Using Scaled Stochastic gradient with regularisation.
print("Using Stochastic gradient with regularisation")

# I tried with different values of tau but found this to be the best.
LearningRate = 0.004
LambdaParameter = 142000
Coeff = [0, 0, 0, 0]
print("Initial coefficients: ")
print(Coeff)

for iter in range(10):
	for i in range(len(PriceTrain)):
		TempCoeff = Coeff.copy()
		for j in range(4):
			if j == 0:
				TempCoeff[j] = TempCoeff[j] - (LearningRate * (SlopeStoch(Coeff, FeaturesTrain[i], PriceTrain[i], j)))
			else:
				TempCoeff[j] = (1 - LearningRate * LambdaParameter / m) * TempCoeff[j] - (LearningRate * (SlopeStoch(Coeff, FeaturesTrain[i], PriceTrain[i], j)))
		Coeff = TempCoeff.copy()

print("Final coefficients are:")
print(Coeff)

# Finding Mean absolute percentage error.
Error = 0
for i in range(len(FeaturesTest)):
	predicted = 0
	for j in range(len(Coeff)):
	  	predicted = predicted + Coeff[j] * FeaturesTest[i][j]
	Error += abs(predicted - PriceTest[i]) / PriceTest[i]
Error = (Error / len(FeaturesTest)) * 100
print("Mean absolute percentage error is : " + str(Error))
print()

# Using Scaled Minibatch gradient with regularisation for batch size = 20
print("Using Scaled Minibatch gradient with regularisation for batch size = 20")

BatchSize = 20;
LearningRate = 0.002
LambdaParameter = -372
Coeff = [0, 0, 0, 0]
NoOfBatches = math.ceil(len(PriceTrain) / BatchSize)
equallyDiv = False
if (len(PriceTrain) % BatchSize == 0):
	equallyDiv = True;

for epoch in range(30):
	for batch in range(NoOfBatches):
		Summation = [0, 0, 0, 0]
		for j in range(len(Coeff)):
			for i in range(BatchSize):
				if (batch * BatchSize + i == len(FeaturesTrain)):
					break
				PredictedValue = 0.0
				for wj in range(len(Coeff)):
					PredictedValue += Coeff[wj] * FeaturesTrain[batch * BatchSize + i][wj]
				PredictedValue -= PriceTrain[batch * BatchSize + i]
				PredictedValue *= FeaturesTrain[batch * BatchSize + i][j]
				Summation[j] += PredictedValue;

		if (not equallyDiv and batch == NoOfBatches - 1):
			for j in range(len(Summation)):
				if j == 0:
					Coeff[j] -= (Summation[j] / (len(PriceTrain) % BatchSize)) * LearningRate
				else:
					Coeff[j] = (1 - LearningRate * LambdaParameter / m) * Coeff[j] - (Summation[j] / (len(PriceTrain) % BatchSize)) * LearningRate
		else:
			for j in range(len(Summation)):
				if j == 0:
					Coeff[j] -= (Summation[j] / BatchSize) * LearningRate
				else:
					Coeff[j] = (1 - LearningRate * LambdaParameter / m) * Coeff[j] - (Summation[j] / BatchSize) * LearningRate
print("Final coefficients are:")
print(Coeff)

# Finding Mean absolute percentage error.
Error = 0
for i in range(len(FeaturesTest)):
	predicted = 0
	for j in range(len(Coeff)):
	  	predicted = predicted + Coeff[j] * FeaturesTest[i][j]
	Error += abs(predicted - PriceTest[i]) / PriceTest[i]
Error = (Error / len(FeaturesTest)) * 100
print("Mean absolute percentage error is : " + str(Error))
print()