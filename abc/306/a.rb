N = gets.to_i
S = gets.chomp

ans = ""
S.each_char do |c|
  ans += c*2
end

puts ans
