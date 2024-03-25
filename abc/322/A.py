n = int(input())
s = input()

if s.find('ABC') == -1:
    print(-1)
else:
    print(s.find('ABC') + 1)