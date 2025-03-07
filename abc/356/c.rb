N, M, K = gets.split.map(&:to_i)
C = Array.new(M)
A = Array.new(M)
R = Array.new(M)
M.times do |i|
  inputs = gets.split
  C[i] = inputs[0].to_i
  A[i] = inputs[1..-2].map(&:to_i)
  R[i] = inputs[-1]
end

ans = 0
(0...(1 << N)).each do |bit|
  (0...M).each do |i|
    count = 0
    (0...C[i]).each do |j|
      if bit & (1 << (A[i][j]-1)) != 0
        count += 1
      end
    end
    flag = false if count >= K && R[i] == 'x'
    flag = false if count < K && R[i] == 'o'
  end
  ans += 1 if flag
end

puts ans
