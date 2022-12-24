import matplotlib.pyplot as plt
import math
import fractions
import numpy as np
pi = 3.1416
# numpy to handle the arrays or matrix
x1 = 0
y1 = 7
x2 = 7
y2 = 7
x3 = 7
y3 = 0
X = [x1, x2, x3, x1]
Y = [y1, y2, y3, y1]

# translate
theta = float(input("Enter rotating variable "))


s = math.sin(math.radians(theta))
c = math.cos(math.radians(theta))

X_new = []
Y_new = []

R = [0, 0, 0]
T = [[c, -s, 0],
     [s, c, 0],
     [0, 0, 1]]


for i in range(len(X)):
    B = [X[i], Y[i], 1]
    R = np.dot(T, B)
    X_new.append(R[0])
    Y_new.append(R[1])

fig = plt.figure()
ax = fig.add_subplot(111)
plt.plot(X, Y, X_new, Y_new)
plt.show()
