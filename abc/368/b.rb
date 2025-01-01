N = gets.to_i
a = gets.split.map(&:to_i)

count = 0
while a.count { |x| x >= 1 } > 1
  a.sort!.reverse!
  a[0] -= 1
  a[1] -= 1
  count += 1
end

puts count
