m = int(input())
d = list(map(int, input().split()))

mid = (sum(d)+1) // 2
for i in range(m):
    if mid <= d[i]:
        print(i+1, mid)
        break
    mid -= d[i]