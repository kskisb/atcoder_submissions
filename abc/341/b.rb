N = gets.to_i
a = gets.split.map(&:to_i)
S, T = (N-1).times.map { gets.chomp.split.map(&:to_i) }.transpose

(0...N-1).each do |i|
  a[i+1] += a[i]/S[i] * T[i]
end

puts a[-1]
