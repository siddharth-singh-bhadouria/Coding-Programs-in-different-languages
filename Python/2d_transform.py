import matplotlib.pyplot as plt
import numpy as np


x1 = int(input("x1: "))
y1 = int(input("y1: "))
l = int(input("Length: "))
w = int(input("Width: "))

X = [x1, x1+l, x1+l, x1, x1]
Y = [y1, y1, y1+w, y1+w, y1]
plt.plot(X, Y)
plt.show()


# Translation factor
x_trans = int(input("x-coordinate translation factor: "))
y_trans = int(input("y-coordinate translation factor: "))
# Scaling factor
scaling_factor = float(input("scaling factor: "))

X_new = []
Y_new = []

T = [[scaling_factor, 0, x_trans],
     [0, scaling_factor, y_trans],
     [0, 0, 1]]

R = [0, 0, 0]


for i in range(len(X)):
    B = [X[i], Y[i], 1]
    R = np.dot(T, B)
    X_new.append(R[0])
    Y_new.append(R[1])


print(X_new)
print(Y_new)


fig = plt.figure()
ax = fig.add_subplot(111)

plt.plot(X, Y, X_new, Y_new)
plt.show()
