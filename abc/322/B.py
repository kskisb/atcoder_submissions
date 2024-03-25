n, m = map(int, input().split())
s = input()
t = input()

rs = s[::-1]
rt = t[::-1]

if t.find(s) == 0 and rt.find(rs) == 0:
    print(0)
elif t.find(s) == 0:
    print(1)
elif rt.find(rs) == 0:
    print(2)
else:
    print(3)