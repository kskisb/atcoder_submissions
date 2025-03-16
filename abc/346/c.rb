N, K = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)

ans = K*(K+1) / 2
A.uniq.each do |a|
  ans -= a if a <= K
end

puts ans
