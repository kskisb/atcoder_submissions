N = gets.to_i
S = gets.chomp

puts S[/\|.*\|/].include?("*") ? "in" : "out"
