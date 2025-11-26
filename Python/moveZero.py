l = [1, 2, 0, 5,4,0,0, 6, 4,6,43,0,6,0,40,0,5]
temp = [0]*len(l)
j =0
for i in range(len(l)):
    if l[i] != 0:
        temp[j] = l[i]
        j+=1
print(temp)
# better approach
n = len(l)
c = 0
for i in range(n):
    if l[i] != 0:
        l[c] = l[i]
        c+=1
while(c<n):
    l[c] = 0
    c+=1
print(l)
l2 = [1, 2, 0, 5,4,0,0, 6, 4,6,43,0,6,0,40,0,5]
c = 0
for i in range(len(l2)):
    if(l2[i]!=0):
        l2[c],l2[i] = l2[i],l2[c]
        c+=1
print(l2)