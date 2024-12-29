N = gets.to_i
X, Y = N.times.map { gets.chomp.split.map(&:to_i) }.transpose

puts X.sum > Y.sum ? "Takahashi" : X.sum == Y.sum ? "Draw" : "Aoki"
