n = int(input())

ans = ['-' for i in range(n+1)]

ans[0] = '1'
for i in range(1, n+1):
    for j in range(1, 10):
        if i%(n/j) == 0:
            ans[i] = str(j)
            break

print(''.join(ans))