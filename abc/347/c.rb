N, A, B = gets.split.map(&:to_i)
D = gets.split.map(&:to_i)

week = A+B
min_remainder = 10**10
max_remainder = 0
N.times do |i|
  remainder = D[i] % week
  min_remainder = [min_remainder, remainder].min
  max_remainder = [max_remainder, remainder].max
end

puts (max_remainder - min_remainder) < A ? "Yes" : "No"
