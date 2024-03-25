n = int(input())
d = list(map(int, input().split()))

cnt = 0
for i in range(1, min(n+1, 100)):
    if i < 10:
        for j in range(1, d[i-1]+1):
            if j<10 and j == i:
                cnt += 1
            elif j%10 == i and (j//10)%10 == i:
                cnt += 1
    else:
        if i%10 == (i//10)%10:
            for j in range(1, d[i-1]+1):
                if j<10 and j == i%10:
                    cnt += 1
                elif j%10 == i%10 and (j//10)%10 == i%10:
                    cnt += 1

print(cnt)