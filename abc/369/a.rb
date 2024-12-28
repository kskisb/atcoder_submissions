A, B = gets.chomp.split.map(&:to_i)

if A == B
  puts 1
elsif A%2 == B%2
  puts 3
else
  puts 2
end
