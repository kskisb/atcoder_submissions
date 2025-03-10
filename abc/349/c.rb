s = gets.chomp
T = gets.chomp

s = s + 'x'

first = s.index(T[0].downcase)
second = s[first+1..-1].index(T[1].downcase) if first
second += first+1 if second
third = s[second+1..-1].index(T[2].downcase) if second
third += second+1 if third

if first && second && third
  puts 'Yes'
else
  puts 'No'
end
