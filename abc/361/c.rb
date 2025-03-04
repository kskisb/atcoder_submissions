N, K = gets.split.map(&:to_i)
a = gets.split.map(&:to_i)
a.sort!

min_diff = 10**10
(0..K).each do |i|
  min_diff = [min_diff, a[i+N-K-1] - a[i]].min
end

puts min_diff
