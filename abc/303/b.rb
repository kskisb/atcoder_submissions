N, M = gets.split.map(&:to_i)
a = M.times.map { gets.split.map(&:to_i) }

couple = Set.new
(0..M-1).each do |i|
  (0..N-2).each do |j|
    couple.add([a[i][j], a[i][j+1]].sort)
  end
end

puts N*(N-1)/2 - couple.size
