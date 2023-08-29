import numpy as np

days = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31]
Infections = [3157, 2568, 3205, 3275, 3545, 3805, 3451, 3207, 2288, 2897, 2827, 2841, 2858, 2487, 2202, 1569, 1829, 2364, 2259, 2323, 2226, 2022, 1675, 2124, 2628, 2710, 2685, 2828, 2706, 2338, 2745]
m = 22
A = 0
B = 0
C = 0
D = 0
for x in range(0, m):
	A += days[x]
	B += Infections[x]
	C += days[x] * days[x]
	D += Infections[x] * (days[x])

w0 = (B * C - A * D) / (m * C - A * A)
w1 = (A * B - m * D) / (A * A - m * C)

print("Squared error in linear fitting : ", end = "")
linear_error = 0
for x in range(22, 31):
	linear_error += (w0 + w1 * days[x] - Infections[x]) * (w0 + w1 * days[x] - Infections[x])
print(linear_error)

i1 = -10 #corrosponding to date 20 April 2022.
i2 = 112 #corrosponding to date 20 August 2022.

Infections1 = w0 + w1 * i1
Infections2 = w0 + w1 * i2

print("Infections on 20 April 2022 by linear: ", end = "")
print(Infections1)
print("Infections on 20 August 2022 by linear : ", end = "")
print(Infections2)

print()
days_train = days[:22]
Infections_train = Infections[:22]
col1 = []
col3 = []
for i in days_train:
	col1.append(1)
	col3.append(i * i)
zipconcat = zip(col1, days_train, col3)
MatrixX = list(zipconcat)
Transpose_MatrixX_ = np.transpose(MatrixX)
DotProduct_MatrixX_and_TransposeMatrixX_ = np.dot(Transpose_MatrixX, MatrixX)
Inverse_DotProduct_MatrixX_and_TransposeMatrixX_ = np.linalg.inv(DotProduct_MatrixX_and_TransposeMatrixX__)
DotProduct_Inverse_DotProduct_MatrixX_and_TransposeMatrixX__and_Transpose_MatrixX_ = np.dot(Inverse_DotProduct_MatrixX_and_TransposeMatrixX_, Transpose_MatrixX_)
MatrixY = []

for i in Infections_train:
	temp = []
	temp.append(i)
	MatrixY.append(temp)

coeff_mat = np.dot(DotProduct_Inverse_DotProduct_MatrixX_and_TransposeMatrixX__and_Transpose_MatrixX_, MatrixY)

w0 = coeff_mat[0][0]
w1 = coeff_mat[1][0]
w2 = coeff_mat[2][0]

print("Squared error in quadratic fitting : ", end = "")
quadratic_error = 0
for x in range(22, 31):
	quadratic_error += (w0 + w1 * days[x] + w2 * days[x] * days[x] - Infections[x]) * (w0 + w1 * days[x] + w2 * days[x] * days[x] - Infections[x])
print(quadratic_error)

ii1 = w0 + w1 * i1 + w2 * i1 * i1
ii2 = w0 + w1 * i2 + w2 * i2 * i2

print("Infections on 20 April 2022 by quadratic : ", end = "")
print(ii1)
print("Infections on 20 August 2022 by quadratic: ", end = "")
print(ii2)

print()
if linear_error < quadratic_error:
	print("linear_error is less")
else:
	print("quadratic_error is less")