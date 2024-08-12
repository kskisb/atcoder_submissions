a = gets.chomp.split.map(&:to_i)
b = gets.chomp.split.map(&:to_i)

puts a.sum - b.sum + 1