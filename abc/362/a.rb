R, G, B = gets.chomp.split.map(&:to_i)
C = gets.chomp

ans = 0
if C == "Red"
  ans = [G, B].min
elsif C == "Green"
  ans = [R, B].min
else
  ans = [R, G].min
end

puts ans