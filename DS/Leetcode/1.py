# ans = []
n= 5
# for i in range(1, n):
#     lst = [1]*i
#     ans.append(lst)
# print(ans)  
# for i in range(2,n):
#     lst=ans[i]
#     for j in range(1,len(ans[i-1])):
#         lst[j]=ans[i-1][j-1]+ans[i-1][j]  
ans = []
for i in range(1, n+1):
    ans.append([1]*i)
print(ans)
for i in range(2, n):
    lst = ans[i]
    for j in range(1, len(ans[i-1])):
        lst[j] = ans[i-1][j-1] + ans[i-1][j]
print(ans)