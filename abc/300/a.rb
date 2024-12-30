N, A, B = gets.split.map(&:to_i)
C = gets.split.map(&:to_i)

puts C.index { |c| c == A+B } + 1
