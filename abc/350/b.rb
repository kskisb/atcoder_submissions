N, Q = gets.chomp.split.map(&:to_i)
T = gets.chomp.split.map(&:to_i)

teeth = [1]*N

Q.times do |i|
  teeth[T[i]-1] *= (-1)
end

puts teeth.count(1)