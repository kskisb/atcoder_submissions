S = gets.chomp

str_len = S.length
chokudai = "chokudai"
ans = Array.new(str_len+1, Array.new(9, 0))

(0..str_len).each do |i|
  ans[i][0] = 1
end

(1..str_len).each do |i|
  (1..8).each do |j|
    ans[i][j] = ans[i-1][j] if S[i-1] != chokudai[j-1]
    ans[i][j] = ans[i-1][j] + ans[i-1][j-1] if S[i-1] == chokudai[j-1]
    ans[i][j] %= 1000000007
  end
end

puts ans[str_len][8]