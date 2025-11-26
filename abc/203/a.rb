a, b, c = gets.split.map(&:to_i)

if a == b then puts c
elsif b == c then puts a
elsif c == a then puts b
else puts 0
end