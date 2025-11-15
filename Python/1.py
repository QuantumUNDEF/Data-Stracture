l = [1, 2,4, 4,5, 2, 1, 4, 9, 8, 9]
dct = {}
for i in l:
    if(i in dct):
        dct[i] += 1
    else:
        dct[i] = 1
print(dct)
for i in dct:
    print(i," ",dct[i])
print("-"*20)
