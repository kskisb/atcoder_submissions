S = gets.chomp

puts S[0] == "<" && S[-1] == ">" && S[1..-2] == "="*(S.length-2) ? "Yes" : "No"
