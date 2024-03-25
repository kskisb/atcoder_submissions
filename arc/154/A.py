N = int(input())
A = list(input())
B = list(input())

for i in range(N):
    if A[i] < B[i]:
        tmp = A[i]
        A[i] = B[i]
        B[i] = tmp

A = ''.join(A)
B = ''.join(B)
A = int(A)
B = int(B)
ans = A*B % 998244353
print(ans)