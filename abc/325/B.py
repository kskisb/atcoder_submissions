n = int(input())
w = [0]*n
x = [0]*n

for i in range(n):
    w[i], x[i] = map(int, input().split())

ans = 0
for t in range(0, 24):
    cnt = 0
    for i in range(n):
        if 9 <= (x[i]+t)%24 <= 17:
            cnt += w[i]
    ans = max(cnt, ans)

print(ans)