import matplotlib.pyplot as plt
import math
x1 = int(input("Enter x1: "))
y1 = int(input("Enter y1: "))
r = int(input("Enter radius r: "))
x = 0
y = r
p = 5/4 - r
x_quad1 = []
y_quad1 = []

while (x < y):
    x_quad1.append(x)
    y_quad1.append(y)
    if p < 0:
        x = x+1
        p = p + 2 * x + 3
    else:
        x = x+1
        y = y-1
        p = p + (2 * x) - (2 * y) + 5
x_quad1.append(x)
y_quad1.append(y)
for i in range(len(x_quad1)):
    x_quad1.append(y_quad1[i])
    y_quad1.append(x_quad1[i])

x_quad2 = [(x1 - x) for x in x_quad1]
y_quad2 = [(y1 + y) for y in y_quad1]
x_quad3 = [(x1 - x) for x in x_quad1]
y_quad3 = [(y1 - y) for y in y_quad1]
x_quad4 = [(x1 + x) for x in x_quad1]
y_quad4 = [(y1 - y) for y in y_quad1]
x_quad1 = [(x1 + x) for x in x_quad1]
y_quad1 = [(y1 + y) for y in y_quad1]
fig = plt.figure()
ax = fig.add_subplot(111)
plt.plot(x_quad1, y_quad1, x_quad2, y_quad2,
         x_quad3, y_quad3, x_quad4, y_quad4)
ax.set_aspect('equal')
plt.title("Mid-point Circle Algorithm")
plt.xlabel("X-Axis")
plt.ylabel("Y-Axis")
plt.show()
