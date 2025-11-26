N, P = gets.split.map(&:to_i)
a = gets.split.map(&:to_i)

puts a.map { |x| x < P }.count(true)