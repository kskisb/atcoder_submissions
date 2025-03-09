N = gets.to_i
giants = []
N.times do |i|
  inputs = gets.split.map(&:to_i)
  giants << [inputs[0], inputs[1] - inputs[0]]
end

giants.sort_by! { |g| g[1] }

ans = 0
(0...N).each do |i|
  ans += giants[i][0]
end
ans += giants[-1][1]

puts ans
