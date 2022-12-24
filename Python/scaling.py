import matplotlib.pyplot as plt
import numpy as np
x1 = int(input("x1: "))
y1 = int(input("y1: "))
x2 = int(input("x2: "))
y2 = int(input("y2: "))
x3 = int(input("x3: "))
y3 = int(input("y3: "))
X = [x1, x2, x3, x1]
Y = [y1, y2, y3, y1]
print(X)
print(Y)
x_size = float(input("X scale"))
y_size = float(input("Y scale"))
S = [[x_size, 0, 0], [0, y_size, 0], [0, 0, 1]]
x_new = []
y_new = []
for i in range(len(X)):
    B = [X[i], Y[i], 1]
    R = np.dot(S, B)
    x_new.append(R[0])
    y_new.append(R[1])
    fig = plt.figure()
ax = fig.add_subplot(111)
plt.plot(X, Y, x_new, y_new)
plt.show()
