A = gets.split.map(&:to_i)

pow_of_2 = 1
ans = 0
A.each do |a|
  ans += a * pow_of_2
  pow_of_2 *= 2
end

puts ans
