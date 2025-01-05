N, T = gets.split.map(&:to_i)
C = gets.split.map(&:to_i)
R = gets.split.map(&:to_i)

max_T = -1
max_1 = R[0]
winner_T = -1
winner_1 = 0

(0..N-1).each do |i|
  if C[i] == T && R[i] > max_T
    max_T = R[i]
    winner_T = i
  end
  if C[i] == C[0] && R[i] > max_1
    max_1 = R[i]
    winner_1 = i
  end
end

puts max_T == -1 ? winner_1+1 : winner_T+1
