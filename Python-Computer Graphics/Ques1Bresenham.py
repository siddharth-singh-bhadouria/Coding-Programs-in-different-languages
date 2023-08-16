# Bresenham Algorithm
# Centre = (0,0)
# Radius = 300

r=300
x_quad1=[]
y_quad1=[]
x=0
y=r
p=3-2*r
#first octant
while(x<y):
    if p<0:
        x=x+1
        p=p+4*x+6
    else:
        x=x+1
        p=p+4*x-4*y+10
        y=y-1
    x_quad1.append(x)
    y_quad1.append(y)
# append the second octant to first octant
x_oct2=[]
y_oct2=[]
for i in range (len(x_quad1)):
    x_oct2.append(y_quad1[i])
    y_oct2.append(x_quad1[i])
x_oct2.reverse()
y_oct2.reverse()
for i in range (len(x_quad1)):
    x_quad1.append(x_oct2[i])
    y_quad1.append(y_oct2[i])
# rest all quads
x_quad2=[(-x) for x in x_quad1]
y_quad2=[(y) for y in y_quad1]
x_quad3=[(-x) for x in x_quad1]
y_quad3=[(-y) for y in y_quad1]
x_quad4=[(x) for x in x_quad1]
y_quad4=[(-y) for y in y_quad1]
# drawing triangle part
X=[0,0,r,0]
Y=[0,r,0,0]
# plot the diagram
import matplotlib.pyplot as plt
fig =plt.figure()
ax = fig.add_subplot(111)
plt.plot(x_quad2,y_quad2,x_quad3,y_quad3,x_quad4,y_quad4,X,Y)
ax.set_aspect('equal', adjustable='box')
plt.title("Bresenham Algorithm")
plt.xlabel("x-axis")
plt.ylabel("y-axis")
plt.show()