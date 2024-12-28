N, C = gets.chomp.split.map(&:to_i)
T = gets.chomp.split.map(&:to_i)

candies = 1
given = T[0]
(1..N-1).each do |i|
  if T[i] - given >= C
    candies += 1
    given = T[i]
  end
end

puts candies
