N, Q = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)

c = Array.new(N)
N.times do |i|
  c[i] = A[i] - (i+1)
end

Q.times do
  k = gets.to_i
end