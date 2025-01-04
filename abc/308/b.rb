N, M = gets.split.map(&:to_i)
C = gets.chomp.split
D = gets.chomp.split
P = gets.split.map(&:to_i)

costs = {}
(0...M).each do |i|
  costs[D[i]] = P[i+1]
end

total_price = 0
C.each do |c|
  total_price += costs.include?(c) ? costs[c] : P[0]
end

puts total_price
