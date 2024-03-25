n, x = map(int, input().split())
a = list(map(int, input().split()))
a.sort()

ans = -1
for i in range(101):
    score = sum(a) + i
    score -= (max(max(a), i) + min(min(a), i))
    if score >= x:
        ans = i
        break

print(ans)