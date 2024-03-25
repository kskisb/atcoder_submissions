N, X = map(int, input().split())
L = list(map(int, input().split()))

D = 0
cnt = 0

for i in range(0, N):
    if D + L[i] <= X:
        cnt += 1
        D += L[i]
    else:
        break

print(cnt+1)