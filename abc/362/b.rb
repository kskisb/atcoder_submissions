x_a, y_a = gets.chomp.split.map(&:to_i)
x_b, y_b = gets.chomp.split.map(&:to_i)
x_c, y_c = gets.chomp.split.map(&:to_i)

ab = (x_a - x_b)*(x_a - x_b) + (y_a - y_b)*(y_a - y_b)
bc = (x_c - x_b)*(x_c - x_b) + (y_c - y_b)*(y_c - y_b)
ca = (x_a - x_c)*(x_a - x_c) + (y_a - y_c)*(y_a - y_c)

if (ab + bc == ca) || (ab + ca == bc) || (ca + bc == ab)
  puts "Yes"
else
  puts "No"
end