S = gets.chomp
T = gets.chomp

len1 = ["AB", "BC", "CD", "DE", "AE"]
len2 = ["AC", "AD", "BE", "BD", "CE"]

puts (len1.include?(S.chars.sort.join) && len1.include?(T.chars.sort.join) || len2.include?(S.chars.sort.join) && len2.include?(T.chars.sort.join)) ? "Yes" : "No"
