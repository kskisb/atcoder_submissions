N = int(input())
S = [input() for i in range(N)]

win_cnt = [[0, -(i+1)] for i in range(N)]

for i in range(N):
    cnt = 0
    for j in range(N):
        if S[i][j] == 'o':
            cnt += 1
    win_cnt[i][0] = cnt

win_cnt.sort(reverse=True)

for i in range(N):
    print(-(win_cnt[i][1]), end=' ')