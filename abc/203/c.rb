N, K = gets.split.map(&:to_i)
A, B = N.times.map { gets.chomp.split.map(&:to_i) }.transpose

h = Hash.new(0)
N.times do |i|
  h[A[i]] += B[i]
end

h = h.sort_by { |k, _| k }

money = K
(0...h.size).each do |i|
  break if h[i][0] > money
  money += h[i][1]
end

puts money