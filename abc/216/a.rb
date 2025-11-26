x, y = gets.split('.').map(&:to_i)

puts "#{x}-" if y <= 2
puts x if 3 <= y && y <= 6
puts "#{x}+" if 7 <= y