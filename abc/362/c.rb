N = gets.to_i
L = Array.new(N)
R = Array.new(N)

N.times do |i|
  L[i], R[i] = gets.split.map(&:to_i)
end

if L.sum > 0 || R.sum < 0
  puts "No"
  exit
end

X = L
sum_X = L.sum
(0...N).each do |i|
  d = [R[i]-L[i], -sum_X].min
  sum_X += d
  X[i] += d
end

puts "Yes"
puts X.join(' ')
