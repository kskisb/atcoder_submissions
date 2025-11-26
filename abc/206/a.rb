N = gets.to_f

if (N*1.08).floor < 206
  puts "Yay!"
elsif (N*1.08).floor == 206
  puts "so-so"
else
  puts ":("
end