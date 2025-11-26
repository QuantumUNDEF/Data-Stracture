import re
l = ["kaushendrasingh2006@gmail.com", "test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"]
mset = set()
for i in range(len(l)):
    up = l[i].split("@") # s
    up[0]= up[0].replace(".", "")
    pos = up[0].find('+')
    up[0] = up[0][:pos] if pos != -1 else up[0]
    mset.add(tuple(up))
print(len(mset))
 


