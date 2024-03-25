N, S, K = list(map(int, input().split()))

cost = 0

for _ in range(N):
    p, q = map(int, input().split())
    cost += p*q

if cost >= S:
    print(cost)
else:
    print(cost + K)