N, x, y, z = gets.chomp.split.map(&:to_i)

x, y = [x, y].min, [x, y].max

if x <= z && z <= y
  puts "Yes"
else
  puts "No"
end