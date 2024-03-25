N = int(input())
A = list(map(int, input().split()))

A.sort(reverse=True)
remove_value = A[0]

while remove_value in A:
    A.remove(remove_value)

print(A[0])