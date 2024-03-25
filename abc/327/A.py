n = int(input())
s = input()

if s.find('ab') != -1 or s.find('ba') != -1:
    print('Yes')
else:
    print('No')