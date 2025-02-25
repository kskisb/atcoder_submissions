N = gets.to_i
A = gets.split.map(&:to_i)
B = gets.split.map(&:to_i)

puts A.max + B.max
