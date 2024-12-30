numbers = gets.split.map(&:to_i)

numbers.uniq!
puts numbers.size == 2 ? "Yes" : "No"
