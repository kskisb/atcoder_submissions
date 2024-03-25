n = int(input())
c = [0]*n
a = [0]*n

for i in range(n):
    c[i] = int(input())
    a[i] = list(map(int, input().split()))

x = int(input())

k = 0
b = []
min_c = 100000
for i in range(n):
    if x in a[i]:
        min_c = min(min_c, c[i])

for i in range(n):
    if x in a[i] and c[i] == min_c:
        k += 1
        b.append(i+1)

print(k)
print(*b)