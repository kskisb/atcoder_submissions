n, d = map(int, input().split())
s = [input() for _ in range(n)]

v = [0]*d
for i in range(n):
    for j in range(d):
        if s[i][j] == 'o':
            v[j] += 1

ans = 0
tmp = 0
for i in range(d):
    if v[i] == n:
        tmp += 1
    else:
        ans = max(ans, tmp)
        tmp = 0

print(max(ans, tmp))