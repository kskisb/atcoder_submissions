import math

p = float(input())

def f(x):
    return x + p * pow(2, -x/1.5)

left = float(0)
right = float(1e9)

cnt = 500
while cnt != 0:
    tmp1 = (right + 2*left) / 3
    tmp2 = (2*right + left) / 3

    if f(tmp1) > f(tmp2):
        left = tmp1
    else:
        right = tmp2
    cnt -= 1

print('{:.12g}'.format(f(left)))