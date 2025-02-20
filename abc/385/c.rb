N = gets.to_i
H = gets.split.map(&:to_i)

ans = 1
(0..N).each do |i|
  (1..N).each do |j|
    max_buildings = 0
    cnt = 0
    while i+j < N && H[i+j*cnt] == H[i]
      max_buildings += 1
      cnt += 1
    end
    ans = [ans, max_buildings].max
  end
end

puts ans
