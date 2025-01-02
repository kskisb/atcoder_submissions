numbers = []
while line = gets
  num = line.to_i
  numbers << num
  break if num == 0
end

puts numbers.reverse
