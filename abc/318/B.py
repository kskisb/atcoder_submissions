n = int(input())

field = [[False]*100 for i in range(100)]

for i in range(n):
    a, b, c, d = map(int, input().split())
    for x in range(a, b):
        for y in range(c, d):
            field[x][y] = True

cnt = 0
for i in range(100):
    for j in range(100):
        if field[i][j] == True:
            cnt += 1

print(cnt)