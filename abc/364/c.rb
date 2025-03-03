N, X, Y = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)
B = gets.split.map(&:to_i)

dishes = A.zip(B)

count1 = 0
dishes = dishes.sort_by { |a| [-a[0], -a[1]] }
sweetness = 0
(0...N).each do |i|
  sweetness += dishes[i][0]
  count1 += 1
  break if sweetness > X
end

count2 = 0
dishes = dishes.sort_by { |a| [-a[1], -a[0]] }
salinity = 0
(0...N).each do |i|
  salinity += dishes[i][1]
  count2 += 1
  break if salinity > Y
end

puts [count1, count2].min
