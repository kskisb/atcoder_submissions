S = gets.chomp

ans = 0
i = 0

while i < S.length
  if i < S.length - 1 && S[i] == '0' && S[i+1] == '0'
    ans += 1
    i += 2
  else
    ans += 1
    i += 1
  end
end

puts ans
