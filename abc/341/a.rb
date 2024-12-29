N = gets.to_i

ans = ""
(2*N+1).times do |i|
  ans += i%2 == 0 ? "1" : "0"
end

puts ans
