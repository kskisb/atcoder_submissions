A, B, C, D = gets.split.map(&:to_f)

if C*D - B <= 0
  puts -1
else
  puts (A/(C*D - B)).ceil
end