n, L, R = list(map(int, input().split()))
A = list(map(int, input().split()))

x = []

for i in range(n):
    if A[i] <= L:
        x.append(L)
    elif A[i] >= R:
        x.append(R)
    else:
        x.append(A[i])

print(*x)