N = gets.to_i
s = gets.chomp
t = gets.chomp

s = s.gsub('0', 'o').gsub('1', 'l')
t = t.gsub('0', 'o').gsub('1', 'l')

puts s == t ? "Yes" : "No"
