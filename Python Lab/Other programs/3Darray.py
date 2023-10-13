array_3d = [[['*' for k in range(6)] for j in range(4)] for i in range(3)]
print("3D Array:")
for i in range(3):
    for j in range(4):
        for k in range(6):
            print(array_3d[i][j][k])
