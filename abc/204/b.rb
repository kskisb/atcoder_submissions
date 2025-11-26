N = gets.to_i
A = gets.split.map(&:to_i)

ans = 0
A.each do |a|
  ans += a < 10 ? 0 : a-10
end

puts ans