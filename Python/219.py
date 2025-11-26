n = [1,0,1,1,0]
k = 2
dct = {}
for i in range(len(n)):
    if n[i] in dct:
        dct[n[i]].append(i)
    else:
        dct[n[i]] = [i]
    #     for j in range(i+1,len(n)):
    #         if n[i] == n[j] and abs(i-j) == k:
    #             return (True)
    # return False
for i in dct:
    # print(i)
    if(len(dct[i])>=2):
        for j in dct[i]:
            print(j-dct[i+1])
print(dct)

