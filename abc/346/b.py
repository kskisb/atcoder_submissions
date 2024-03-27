w, b = map(int, input().split())
s = "wbwbwwbwbwbw"*20

ans = "No"
for i in range(0, len(s)):
    for j in range(i, len(s)+1):
        s_tmp = s[i:j]
        if s_tmp.count('w') == w and s_tmp.count('b') == b:
            ans = "Yes"

print(ans)