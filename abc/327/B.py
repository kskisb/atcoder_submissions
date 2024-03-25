B = int(input())

ans = -1
for A in range(1, 100):
    tmp = A**A
    if tmp > 1000000000000000000:
        break
    if tmp == B:
        ans = A
        break

print(ans)