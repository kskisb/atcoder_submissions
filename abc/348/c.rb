N = gets.to_i
A = Array.new(N)
C = Array.new(N)

N.times do |i|
  A[i], C[i] = gets.split.map(&:to_i)
end

colors = Hash.new(10**10)
N.times do |i|
  colors[C[i]] = [colors[C[i]], A[i]].min
end

puts colors.values.max
