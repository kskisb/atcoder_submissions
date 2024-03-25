n = int(input())
p = list(map(int, input().split()))

first = p.pop(0)

if len(p) == 0 or max(p) < first:
    print(0)
else:
    print(max(p) - first + 1)