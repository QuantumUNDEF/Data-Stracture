#first unique element
s = "0a1a2bbc2033c1ed"
unique = None
dct = {}
for i in s:
    if(i in dct):
        dct[i] += 1
    else:
        dct[i] = 1
for i in dct:
    if(dct[i] == 1):
        unique = i
        break

print(unique)
print(dct)