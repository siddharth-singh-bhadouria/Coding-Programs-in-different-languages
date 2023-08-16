
# 2-D Transformation of Ellipse

import numpy as np
import matplotlib.pyplot as plt
import math
#c=math.cos(math.radians(30))
x1=0
y1=0
b=200
a=500
#initialise x&y
x=0
y=b
d1=b*b-a*a*b+0.25*a*a
x_quad1=[]
y_quad1=[]
#generate new points
while(a*a*(y-0.5)>b*b*(x+1)):
    if(d1<0):
        d1=d1+b*b*(2*x+3)
    else:
        d1=d1+b*b*(2*x+3)+a*a*(2-2*y)
        y=y-1
    x=x+1
    x_quad1.append(x)
    y_quad1.append(y)
#region2
d2=b*b*(x+0.5)*(x+0.5)+a*a*(y-1)*(y-1)-a*a*b*b
while(y>0):
    if(d2<0):
        d2=d2+b*b*(2*x+2)+a*a*(3-2*y)
        x=x+1
    else:
        d2=d2+a*a*(3-2*y)
    y=y-1
    x_quad1.append(x)
    y_quad1.append(y)


#append the values to all quads
x_quad2=[(x1-x) for x in x_quad1]
y_quad2=[(y1+y) for y in y_quad1]
x_quad2.reverse()
y_quad2.reverse()

x_quad3=[(x1-x) for x in x_quad1]
y_quad3=[(y1-y) for y in y_quad1]


x_quad4=[(x1+x) for x in x_quad1]
y_quad4=[(y1-y) for y in y_quad1]
x_quad4.reverse()
y_quad4.reverse()


x_quad1=[(x1+x) for x in x_quad1]
y_quad1=[(y1+y) for y in y_quad1]
X=[]
Y=[]
for i in range (len(x_quad1)):
    X.append(x_quad1[i])
for i in range(len(x_quad1)):
    X.append(x_quad4[i])
for i in range(len(x_quad1)):
    X.append(x_quad3[i])
for i in range(len(x_quad1)):
    X.append(x_quad2[i])
for i in range (len(x_quad1)):
    Y.append(y_quad1[i])
for i in range(len(x_quad1)):
    Y.append(y_quad4[i])
for i in range(len(x_quad1)):
    Y.append(y_quad3[i])
for i in range(len(x_quad1)):
    Y.append(y_quad2[i])

x_trans=400
y_trans=300
X_new=[]
Y_new=[]
T=[[1,0,x_trans],
   [0,1,y_trans],
   [0,0,1]]
R=[0,0,0]
for i in range (len(X)):
    B=[X[i],Y[i],1]
    R=np.dot(T,B)
    X_new.append(R[0])
    Y_new.append(R[1])


s = math.sin(math.radians(30))
c = math.cos(math.radians(30))

X_new2 = []
Y_new2= []

R = [0, 0, 0]
T = [[c, -s, 0],
     [s, c, 0],
     [0, 0, 1]]


for i in range(len(X)):
    B = [X_new[i], Y_new[i], 1]
    R = np.dot(T, B)
    X_new2.append(R[0])
    Y_new2.append(R[1])

fig = plt.figure()
ax = fig.add_subplot(111)
plt.plot(X, Y, X_new, Y_new,X_new2,Y_new2)
plt.xlabel('x-axis')
plt.ylabel('y-axis')
plt.show()


