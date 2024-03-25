n, m, p = map(int, input().split())

if (n - m) >= 0:
    print((n-m)//p + 1)
else:
    print(0)