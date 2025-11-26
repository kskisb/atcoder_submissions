N, K = gets.split.map(&:to_i)

ans = 0
(1..N).each do |i|
  room = i*100
  (1..K).each do |j|
    ans += room + j
  end
end

puts ans