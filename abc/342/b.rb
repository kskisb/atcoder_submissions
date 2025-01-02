N = gets.to_i
P = gets.split.map(&:to_i)
Q = gets.to_i

Q.times do
  a, b = gets.split.map(&:to_i)
  puts P.index(a) < P.index(b) ? a : b
end
