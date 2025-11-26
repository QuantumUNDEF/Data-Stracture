import random as rd
rd.seed(35)
l = [ rd.randint(0,1) for _ in range(10)]
print(l)
max1 = 0
n = len(l)
for  i in range(n):
    if l[i] ==1:
        sum = 0
        j = i
        while j<n and l[j] ==1:
            sum += l[j]
            j+=1
        max1 = max(sum, max1)
        i = j
    
print(max1)