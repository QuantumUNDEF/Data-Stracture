l =[-1,0,1,0]
lst = []

for i in range(len(l)):
    for j in range(i+1, len(l)):
        x = -(l[i]+l[j])
        l.pop(i)
        if (x in l and x != l[i] and x != l[j]) or (x == l[i] and x==l[j] and x ==0) :
            l2 = [l[i], l[j], x]
            lst.append(l2)
print(lst)
lst2 =[]
for s in lst:
    if( sorted(s) not in lst2):
        lst2.append(sorted(s))
print(lst2)

