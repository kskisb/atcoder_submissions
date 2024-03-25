S = input()

flag = True
for i in range(len(S)):
    if i%2 == 1 and S[i] != '0':
        flag = False

if flag:
    print('Yes')
else:
    print('No')