S = gets.chomp

puts S[0] == S[0].upcase &&  S[1..-1] == S[1..-1].downcase ? "Yes" : "No"
