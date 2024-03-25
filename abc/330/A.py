n, l = list(map(int, input().split()))
a = list(map(int, input().split()))

cnt = 0
for i in range(n):
    if a[i] >= l:
        cnt += 1

print(cnt)