a, b = gets.chomp.split.map(&:to_i)

if a == b
  puts -1
else
  puts 6-a-b
end