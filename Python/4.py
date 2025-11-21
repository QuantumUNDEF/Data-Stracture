nums = [1, 1,2]
n = len(nums)
myset = []
for i in range(n):
    if nums[i] in myset:
        continue
    else: 
        temp = nums[i]
        myset.append(temp)
print(myset)
s = set()
s.intersection()
        