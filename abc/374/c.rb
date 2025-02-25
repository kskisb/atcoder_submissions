N = gets.to_i
K = gets.split.map(&:to_i)

ans = 1000000000000
(0...(1 << N)).each do |bit|
  tmp_sum = 0
  (0...N).each do |i|
    if bit & (1 << i) != 0
      tmp_sum += K[i]
    end
  end
  tmp_sum = [tmp_sum, (K.sum - tmp_sum)].max
  ans = [ans, tmp_sum].min
end

puts ans
