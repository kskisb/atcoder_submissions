N, M = map(int, input().split())
number = [0] * N
flag = [False] * N
possible_or_not = True
number[0] = 1
if N == 1 and M == 0:
    number[0] = 0

for i in range(M):
    s, c = map(int, input().split())
    if not flag[s-1]:
        if s == 1 and c == 0 and N != 1:
            possible_or_not = False
            break
        number[s-1] = c
        flag[s-1] = True
    else:
        if number[s-1] == c:
            continue
        else:
            possible_or_not = False
            break

if(possible_or_not):
    for n in number:
        print(n, end="")
    print("\n")
else:
    print(-1)