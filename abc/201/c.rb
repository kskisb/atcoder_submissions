S = gets.chomp

ans = 0
(0..9999).each do |i|
  flag = Array.new(10, false)
  x = i
  4.times do
    flag[x%10] = true
    x /= 10
  end
  flag2 = true
  (0..9).each do |j|
    flag2 = false if S[j] == "o" && !flag[j]
    flag2 = false if S[j] == "x" && flag[j]
  end
  ans += 1 if flag2
end

puts ans