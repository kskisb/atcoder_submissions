N = gets.to_i
A = gets.chomp.split.map(&:to_i)
B = gets.chomp.split.map(&:to_i)
C = gets.chomp.split.map(&:to_i)

h = Hash.new(0)

N.times do |i|
  h[B[C[i]-1]] += 1
end


ans = 0
N.times do |i|
  ans += h[A[i]]
end

puts ans