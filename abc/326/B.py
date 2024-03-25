N = int(input())

for i in range(N, 1000):
    if i%10 == (i//100) * ((i//10)%10):
        print(i)
        break