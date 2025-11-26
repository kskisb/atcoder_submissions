N = gets.to_i

ans = 0
while 2**ans <= N
  ans += 1
end

puts ans-1