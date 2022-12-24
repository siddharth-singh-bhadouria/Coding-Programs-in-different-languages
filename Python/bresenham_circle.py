import matplotlib.pyplot as plt

# input
xc = int(input("x coordinate of centre: "))
yc = int(input("y coordinate of centre: "))
r =  int(input("radius of circle: "))

x,y = 0,r
p = 3- 2*r

#first octant
xq1 = []
yq1 = []

while x<y:
 if p<0:  
  x += 1
  p = p+4*x+6
 else:
  x += 1
  p = p + 4*x - 4*y + 10
  y -= 1

 xq1.append(x)
 yq1.append(y)


# second octant
xq2 = []
yq2 = []

#append the second octant into first quadrant
for i in range(len(xq1)):
 xq2.append(yq1[i])
 yq2.append(xq1[i])

xq2.reverse()
yq2.reverse()

for i in range(len(xq1)):
 xq1.append(xq2[i])
 yq1.append(yq2[i])


# first quad wrt center
xq1 = [(xc+x) for x in xq1]
yq1 = [(yc+y) for y in yq1]

# second quad wrt center
xq2 = [(xc-x) for x in xq1]
yq2 = [(yc+y) for y in yq1]

# third quad wrt center
xq3 = [(xc-x) for x in xq1]
yq3 = [(yc-y) for y in yq1]

# forth quad wrt center
xq4 = [(xc+x) for x in xq1]
yq4 = [(yc-y) for y in yq1]


fig = plt.figure()
ax = fig.add_subplot(111)

ax.set_aspect('equal',adjustable='box')

plt.plot(xq1,yq1,xq2,yq2,xq3,yq3,xq4,yq4)
plt.show()