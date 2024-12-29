A, B, D = gets.chomp.split.map(&:to_i)

ans = []
x = A
while x <= B
  ans << x
  x += D
end

puts ans.join(" ")
