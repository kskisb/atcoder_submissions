n = gets.to_i
T, V = n.times.map { gets.chomp.split.map(&:to_i) }.transpose

water = V[0]
(1...n).each do |i|
  water -= (T[i] - T[i-1])
  if water < 0
    water = 0
  end
  water += V[i]
end

puts water
