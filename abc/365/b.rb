N = gets.to_i
A = gets.split.map(&:to_i)

second_best = A.sort[-2]
puts A.index(second_best) + 1
