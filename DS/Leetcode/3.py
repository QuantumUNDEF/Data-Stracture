#3sum
import random as rd
rd.seed(3)
l = [rd.randint(-20, 20) for _ in range(15)]
print(l)
n= len(l)
# -------------------------------------------
myset0 = set()
for i in range(0, n):
    for j in range(i+1, n):
        for k in range(j+1,  n):
            if (l[i]+l[j]+l[k] == 0):
                temp = [l[i],l[j],l[k]]
                temp.sort()
                myset0.add(tuple(temp))
print([list(_) for _ in myset0])
# --------------------------------------------
result = set()
for i in range(0,  n):
    myset = set()
    for j in range(i+1,  n):
        third = -(l[i] + l[j])
        if third in myset:
            temp = [l[i], l[j], third]
            temp.sort()
            result.add(tuple(temp))
        myset.add(l[j])
print([list(i) for i in result])
#--------------------------------------------
ans =[]
print(l)
l.sort()
print(l)
n =  n
for i in range(n):
    if i!=0 and l[i] == l[i-1]:
        continue
    j = i+1
    k = n-1
    while(j<k):
        total = l[i]+l[j]+l[k]
        if(total < 0):
            j+=1
        elif(total > 0):
            k -=1
        else:
            temp = [l[i], l[j], l[k]]
            ans.append(temp)
            j+=1
            k-=1
            while j<k and  l[j] == l[j-1]:
                j += 1
            while j<k and l[k] == l[k+1]:
                k-=1
print(ans)
print(1)