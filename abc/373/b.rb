S = gets.chomp
X = Array.new(26)

(0...26).each do |i|
  X[S[i].ord - 'A'.ord] = i
end

ans = 0
(0...25).each do |i|
  ans += (X[i] - X[i+1]).abs
end

puts ans
