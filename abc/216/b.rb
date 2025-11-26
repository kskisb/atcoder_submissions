N = gets.to_i
S, T = N.times.map { gets.chomp.split }.transpose

flag = false
(0...N).each do |i|
  (i+1...N).each do |j|
    if S[i] == S[j] && T[i] == T[j]
      flag = true
      break
    end
  end
end

puts flag ? "Yes" : "No"