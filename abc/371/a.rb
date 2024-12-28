ab, ac, bc = gets.chomp.split

if ab == "<"
  if bc == "<"
    puts "B"
  elsif bc == ">" && ac == "<"
    puts "C"
  elsif bc == ">" && ac == ">"
    puts "A"
  end
elsif ab == ">"
  if ac == "<"
    puts "A"
  elsif ac == ">" && bc == "<"
    puts "C"
  elsif ac == ">" && bc == ">"
    puts "B"
  end
end
