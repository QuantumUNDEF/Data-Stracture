import random as rd
rd.seed(3)
l = [ rd.randint(0, 1) for _ in range(15)]
print(l)
n = len(l)
c =0
for i in range(n):
    if i != 0 and l[i] == l[i-1] and l[i] == 1:
        c += 1
print(c)
