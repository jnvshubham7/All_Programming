import numpy as np

days = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31]
cases = [3523, 3689, 3417, 3449, 3780, 3980, 3915, 4187, 4092, 3754, 3876, 4205, 4120, 4000, 3890, 4114, 4069, 3761, 5097, 3874, 4209, 4194, 3741, 4454, 3511, 4107, 3897, 3660, 3617, 3460, 3128]
m = 22          #for training
mt = 9          #for testing
d1 = -10        #corrosponding to date April 20th
d2 = 41         #corrosponding to date June 10th
y1 = 1802       #7-day average of no. of cases on April 20th
y2 = 3375       #7-day average of no. of cases on June 10th

Y = np.array(cases[:m])
Y = np.array([Y]).T


Y_test = np.array(cases[m:])
Y_test = np.array([Y_test]).T


#FOR STRAIGHT LINE FITTING
print("FOR STRAIGHT LINE FITTING\n")

X1 = np.ones([m, 2])
for i in range(0,m):
  X1[i][1] = days[i]

Xt1 = np.transpose(X1)          #Transpose of X ( -> X')

XtX1 = np.dot(Xt1, X1)          #Dot product of X' and X

XtXi1 = np.linalg.inv(XtX1)     #Inverse of Dot product of X' and X

XtY1 = np.dot(Xt1, Y)           #Dot product of X' and Y
W1 = np.dot(XtXi1, XtY1)        #Coefficients for straight line fitting

print("Coefficients for straight line fitting:")
print(W1)        

W1 = np.transpose(W1)       #Storing transpose in place of W1 (as W1 is used in all calculations as its transpose)

X_test1 = np.ones([mt, 2])
for i in range(0, mt):
  X_test1[i][1] = days[i+m]

H1 = np.ones([mt,1])

for i in range(0, mt):
  x = np.transpose(X_test1[i:i+1, :])
  H1[i] = np.dot(W1, x)

dH = (H1 - Y_test) * (H1 - Y_test)
linear_error = np.sum(dH)/(2*mt)

print("Squared error in linear fitting : ", end = "")
print(linear_error)

#calculating cases on April 20th and June 10th
cases1 = np.dot(W1, [1, d1])
print("predicted cases on April 20th, 2021 : ", end = "")
print(cases1[0])

cases2 = np.dot(W1, [1, d2])
print("predicted cases on August 10th, 2021 : ", end = "")
print(cases2[0])

le = (abs(cases1[0] - y1) + abs(cases2[0] - y2))/2
print("Mean error in prediction : ", end = "")
print(le)


print("\n\n")
#FOR QUADRATIC CURVE FITTING
print("FOR QUADRATIC CURVE FITTING\n")

X2 = np.ones([m, 3])
for i in range(0,m):
  X2[i][1] = days[i]
  X2[i][2] = days[i]*days[i]

Xt2 = np.transpose(X2)

XtX2 = np.dot(Xt2, X2)

XtXi2 = np.linalg.inv(XtX2)

XtY2 = np.dot(Xt2, Y)
W2 = np.dot(XtXi2, XtY2)      #Coefficients for quadratic curve fitting

print("Coefficients for quadratic curve fitting:")
print(W2)        

W2 = np.transpose(W2)       #Storing transpose in place of W2 (as W2 is used in all calculations as its transpose)

X_test2 = np.ones([mt, 3])
for i in range(0, mt):
  X_test2[i][1] = days[i+m]
  X_test2[i][2] = days[i+m]*days[i+m]

H2 = np.ones([mt,1])

for i in range(0, mt):
  x = np.transpose(X_test2[i:i+1, :])
  H2[i] = np.dot(W2, x)

dH = (H2 - Y_test) * (H2 - Y_test)
quadratic_error = np.sum(dH)/(2*mt)

print("Squared error in quadratic curve fitting : ", end = "")
print(quadratic_error)

#calculating cases on April 20th and June 10th
cases1 = np.dot(W2, [1, d1, d1*d1])
print("predicted cases on April 20th, 2021 : ", end = "")
print(cases1[0])

cases2 = np.dot(W2, [1, d2, d2*d2])
print("predicted cases on August 10th, 2021 : ", end = "")
print(cases2[0])

qe = (abs(cases1[0] - y1) + abs(cases2[0] - y2))/2
print("Mean error in prediction : ", end = "")
print(qe)


print("\n\n")
#COMPARISION
if(le<qe):
  print("Comparing their performances, Straight Line Fitting gives more accurate results.")
else:
  print("Comparing their performances, Quadratic Curve Fitting gives more accurate results.")