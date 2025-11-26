S = 3.times.map { gets.chomp }
T = gets.chomp

ans = ""
T.chars.each do |c|
  ans += S[c.to_i - 1]
end

puts ans