arr = [i for i in range(1, 9)]
d = 9
for _ in range(d):
    temp = arr[0]
    for i in range(1,len(arr)):
        arr[i-1] = arr[i]
    arr[-1] = temp
print(arr)
