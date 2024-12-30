N, D = gets.split.map(&:to_i)
T = gets.split.map(&:to_i)

ans = -1
(1..N-2).each do |i|
  if T[i] - T[i-1] <= D
    ans = T[i]
    break
  end
end

puts ans
