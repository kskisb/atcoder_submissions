A, B = gets.split.map(&:to_i)

puts "Gold" if 0 < A && B == 0
puts "Silver" if A == 0 && 0 < B
puts "Alloy" if 0 < A && 0 < B