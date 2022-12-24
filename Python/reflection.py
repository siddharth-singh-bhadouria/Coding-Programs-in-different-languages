import matplotlib.pyplot as plt
import numpy as np

q2_x = [-1, 0, 1, 0, -1]
q2_y = [0, -2, 0, 2, 0]

q2_k = ([1, 0, 0], [0, 1, -2], [0, 0, 1])  # translation matrix
q2_xnew = []
q2_ynew = []
for i in range(len(q2_x)):
    l = [q2_x[i], q2_y[i], 1]
    q2_t = np.dot(q2_k, l)  # matrix multiplication

    q2_xnew.append(q2_t[0])
    q2_ynew.append(q2_t[1])  # new coordinates after shifting origin

q2_reflec = ([1, 0, 0], [0, -1, 0], [0, 0, 1])

q2_ynew2 = []
q2_xnew2 = []
for i in range(len(q2_x)):
    re = [q2_xnew[i], q2_ynew[i], 1]
    q2_ref = np.dot(q2_reflec, re)
    q2_xnew2.append(q2_ref[0])
    q2_ynew2.append(q2_ref[1])  # co-ordinates after reflection


q2_xnew3 = []
q2_ynew3 = []
q2_w = ([1, 0, 0], [0, 1, 2], [0, 0, 1])
for i in range(len(q2_x)):
    pl = [q2_xnew2[i], q2_ynew2[i], 1]
    q2_yu = np.dot(q2_w, pl)  # matrix multiplication

    q2_xnew3.append(q2_yu[0])
    q2_ynew3.append(q2_yu[1])


plt.plot(q2_x, q2_y, q2_xnew3, q2_ynew3)
plt.show()
