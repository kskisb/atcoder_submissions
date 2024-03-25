import math

p = float(input())
x = -1.5 * math.log2(1.5/(p*math.log(2)))

ans = x + p * pow(2, -x/1.5)
if x < 0:
    print(p)
else:
    print(ans)