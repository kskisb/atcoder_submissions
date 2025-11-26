N, X = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)

total = 0
N.times do |i|
  total += i%2 == 0 ? A[i] : A[i] - 1
end

puts total <= X ? "Yes" : "No"