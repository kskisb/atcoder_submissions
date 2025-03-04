N = gets.to_i
A = gets.split.map(&:to_i)
W = gets.split.map(&:to_i)

luggages = Array.new(N) { [] }
(0...N).each do |i|
  luggages[A[i]-1].push(W[i])
end

ans = 0
(0...N).each do |i|
  luggages[i].sort!.reverse!
  (1...luggages[i].size).each do |j|
    ans += luggages[i][j]
  end
end

puts ans
