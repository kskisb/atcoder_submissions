n, x = map(int, input().split())
s = list(map(int, input().split()))

sum = 0
for i in range(n):
    if s[i] <= x:
        sum += s[i]

print(sum)