N = gets.to_i
c = gets.split.map(&:to_i)
c.sort!

now_max = 0
ans = 1
(0...N).each do |i|
  now_max = [now_max, c[i]].max
  ans *= (now_max - i) % 1000000007
  ans %= 1000000007
end

puts ans