import random as rd
rd.seed(35)
l = [ rd.randint(0,1) for _ in range(10)]
print(l)
k = 2
maxi = 0
c = 0
i =0
j = 0
n = len(l)
while(j<n):
    if l[j] ==0:
        c += 1
        while(c>k):
            if(l[i]==0):
                c -= 1
                i+=1
        maxi = max(maxi,j-i-1)
           
    i+=1