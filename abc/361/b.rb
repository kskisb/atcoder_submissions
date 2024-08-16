a, b, c, d, e, f = gets.chomp.split.map(&:to_i)
g, h, i, j, k, l = gets.chomp.split.map(&:to_i)

if (d > g) && (e > h) && (f > i) && (j > a) && (k > b) && (l > c)
  puts "Yes"
else
  puts "No"
end