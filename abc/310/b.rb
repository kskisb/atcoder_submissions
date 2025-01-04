N, M = gets.split.map(&:to_i)
P = []
C = []
F = []
N.times do
  input = gets.split.map(&:to_i)
  P << input[0]
  C << input[1]
  F << input[2..-1]
end

ans = false
(0...N).each do |i|
  (i+1...N).each do |j|
    tmp_i, tmp_j = P[i] >= P[j] ? [i, j] : [j, i]
    flag = F[tmp_i].all? { |f| F[tmp_j].include?(f) } ? true : false
    flag2 = (P[tmp_i] > P[tmp_j]) || !(F[tmp_j].all? { |f| F[tmp_i].include?(f) }) ? true : false
    ans = flag && flag2 ? true : ans
  end
end

puts ans ? "Yes" : "No"
