N = gets.to_i
A = N.times.map { gets.split.map(&:to_i) }

now = 1
(1..N).each do |i|
  now = now >= i ? A[now-1][i-1] : A[i-1][now-1]
end

puts now
