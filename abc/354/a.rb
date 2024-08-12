H = gets.to_i

plant = 0
count = 0

while plant <= H
  plant += 2**count
  count += 1
end

puts count