import sys
h, w = map(int, input().split())
s = [input() for _ in range(h)]

snuke = ['s', 'n', 'u', 'k', 'e']
for i in range(h):
    for j in range(w):
        ans = []
        for k in range(5):
            if 0 <= i+k < h and s[i+k][j] == snuke[k]:
                ans.append((i+k+1, j+1))
        if len(ans) == 5:
            for i in range(5):
                print(*ans[i])
            sys.exit()
        else:
            ans = []

        for k in range(5):
            if 0 <= i-k < h and s[i-k][j] == snuke[k]:
                ans.append((i-k+1, j+1))
        if len(ans) == 5:
            for i in range(5):
                print(*ans[i])
            sys.exit()
        else:
            ans = []

        for k in range(5):
            if 0 <= j+k < w and s[i][j+k] == snuke[k]:
                ans.append((i+1, j+k+1))
        if len(ans) == 5:
            for i in range(5):
                print(*ans[i])
            sys.exit()
        else:
            ans = []

        for k in range(5):
            if 0 <= j-k < w and s[i][j-k] == snuke[k]:
                ans.append((i+1, j-k+1))
        if len(ans) == 5:
            for i in range(5):
                print(*ans[i])
            sys.exit()
        else:
            ans = []

        for k in range(5):
            if 0 <= i+k < h and 0 <= j+k < w and s[i+k][j+k] == snuke[k]:
                ans.append((i+k+1, j+k+1))
        if len(ans) == 5:
            for i in range(5):
                print(*ans[i])
            sys.exit()
        else:
            ans = []

        for k in range(5):
            if 0 <= i-k < h and 0 <= j-k < w and s[i-k][j-k] == snuke[k]:
                ans.append((i-k+1, j-k+1))
        if len(ans) == 5:
            for i in range(5):
                print(*ans[i])
            sys.exit()
        else:
            ans = []

        for k in range(5):
            if 0 <= i+k < h and 0 <= j-k < w and s[i+k][j-k] == snuke[k]:
                ans.append((i+k+1, j-k+1))
        if len(ans) == 5:
            for i in range(5):
                print(*ans[i])
            sys.exit()
        else:
            ans = []

        for k in range(5):
            if 0 <= i-k < h and 0 <= j+k < w and s[i-k][j+k] == snuke[k]:
                ans.append((i-k+1, j+k+1))
        if len(ans) == 5:
            for i in range(5):
                print(*ans[i])
            sys.exit()
        else:
            ans = []