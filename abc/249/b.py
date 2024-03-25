S = input()

dic = {}
flag1 = False
flag2 = False
for s in S:
    if(s == s.upper()):
        flag1 = True
    if(s == s.lower()):
        flag2 = True
    if(s in dic):
        dic[s] += 1
    else:
        dic[s] = 1
    
flag3 = True
for d in dic.values():
    if not d == 1:
        flag3 = False

if flag1 and flag2 and flag3:
    print("Yes")
else:
    print("No")