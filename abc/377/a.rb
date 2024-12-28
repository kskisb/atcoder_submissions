s = gets.chomp

s = s.chars.sort.join

puts s == "ABC" ? "Yes" : "No"
