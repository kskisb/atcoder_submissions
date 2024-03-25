n, m = map(int, input().split())
s = [input() for i in range(n)]

for i in range(0, n-8):
    for j in range(0, m-8):
        flag = True
        for k in range(i, i+3):
            for l in range(j, j+3):
                if s[k][l] != '#':
                    flag = False
        for k in range(i+6, i+9):
            for l in range(j+6, j+9):
                if s[k][l] != '#':
                    flag = False
        for k in range(4):
            if s[i+3][j+k] != '.' or s[i+k][j+3] != '.' or s[i+5][j+5+k] != '.' or s[i+k+5][j+5] != '.':
                flag = False
        if flag:
            print(i+1, j+1)