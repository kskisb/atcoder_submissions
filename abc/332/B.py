k, g, m = list(map(int, input().split()))

glass= 0
mug = 0

for _ in range(k):
    if glass == g:
        glass = 0
    elif mug == 0:
        mug = m
    else:
        if (g-glass) >= mug:
            glass += mug
            mug = 0
        else:
            mug -= (g-glass)
            glass = g

print(glass, mug)