import random as rd
rd.seed(3)
l = [ rd.randint(0,1) for _ in range(10)]
print(l)
cur = 0
sum1 =0
sum2 =0
n = len(l)
l2 = 1
k = 8
q = 0
for i in l:
    if i ==1:
        cur += 1
    else:
        cur = 0
    if(sum1<cur):
        sum1 = cur
    q += 1
diff = n - sum1
print(diff)
print(sum1)
if(k == diff):
    print(f"Max conjugative one are {n}")

