n, m = map(int, input().split())
p = []
c = []
f = []

a = [ list(map(int,input().split(" "))) for _ in range(n)]
for i in range(n):
    p.append(a[i][0])
    c.append(a[i][1])
    f.append(a[i][2:])

