# Mid-Point Circle Algorithm
# Centre = (0,0)
# Radius = 300


r=300
#initialising of x&y
x=0
y=r
P=1.25-r
x_quad1=[]
y_quad1=[]
# generating value of next coordinates in quad 1
while x<y:
    x_quad1.append(x)
    y_quad1.append(y)
    if P<0:
        x+=1
        P=P+2*x+1
    else:
        x+=1
        y-=1
        P=P+2*x-2*y+1
x_quad1.append(x)
y_quad1.append(y)

x_oct2=[]
y_oct2=[]
#append the second octant to first octant
for i in range (len(x_quad1)):
    x_oct2.append(y_quad1[i])
    y_oct2.append(x_quad1[i])

x_oct2.reverse()
y_oct2.reverse()

for i in range (len(x_quad1)):
    x_quad1.append(x_oct2[i])
    y_quad1.append(y_oct2[i])

#append the second octant into first quadrant
for i in range(len(x_quad1)):
    x_quad1.append(y_quad1[i])
    y_quad1.append(x_quad1[i])
#rest quads
x_quad2=[(-x) for x in x_quad1]
y_quad2=[(y) for y in y_quad1]
x_quad3=[(-x) for x in x_quad1]
y_quad3=[(-y) for y in y_quad1]
x_quad4=[(x) for x in x_quad1]
y_quad4=[(-y) for y in y_quad1]
#generating triangle part
X=[0,0,r,0]
Y=[0,r,0,0]
#plotting of diagram
import matplotlib.pyplot as plt
fig =plt.figure()
ax = fig.add_subplot(111)
plt.plot(X,Y,x_quad2,y_quad2,x_quad3,y_quad3,x_quad4,y_quad4)
ax.set_aspect('equal', adjustable='box')
plt.title("Mid-Point Algorithm")
plt.xlabel("x-axis")
plt.ylabel("y-axis")
plt.show()