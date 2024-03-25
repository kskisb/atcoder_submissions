n = input()

flag = True

for i in range(len(n)-1):
    if n[i] <= n[i+1]:
        flag  = False

if flag:
    print('Yes')
else:
    print('No')