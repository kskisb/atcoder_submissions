n = int(input())
a = list(map(int, input().split()))

ans = 'Yes'
for i in range(n-1):
    if a[i] != a[i+1]:
        ans = 'No'

print(ans)