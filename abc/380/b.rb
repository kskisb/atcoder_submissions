str = gets.chomp

str = str[1..-1]
puts str.split("|").map { |s| s.size }.join(" ")
