import math
n = 5
lst = []
for r in range(0,n):
    nCr = math.comb(n-1, r)
    lst.append(nCr)
print(lst)