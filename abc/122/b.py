s = input()

ans = 0
for i in range(len(s)):
    for j in range(i, len(s)+1):
        tmp = s[i:j]
        cnt = tmp.count('A') + tmp.count('T') + tmp.count('C') + tmp.count('G')
        if cnt == len(tmp):
            ans = max(ans, len(tmp))

print(ans)