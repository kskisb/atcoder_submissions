N, K, X = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)

A.insert(K, X)

puts A.join(' ')