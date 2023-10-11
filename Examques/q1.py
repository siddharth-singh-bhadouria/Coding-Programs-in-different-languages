def allprime (start ,end ):
    for i in range(start,end+1):
        c=0
        for j in range (1,i):
            if (i%j==0):
                c=c+1
        if (c==1):
            print (i)


allprime(3,15)