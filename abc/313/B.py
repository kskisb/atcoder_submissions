n, m = map(int, input().split())

s = [True]*n

for i in range(m):
    a, b = map(int, input().split())
    s[b-1] = False

if s.count(True) == 1:
    print(s.index(True)+1)
else:
    print(-1)