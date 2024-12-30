N = gets.to_i
S = gets.chomp

puts S.include?("o") && !S.include?("x") ? "Yes" : "No"
