N, K = gets.chomp.split.map(&:to_i)
A = gets.chomp.split.map(&:to_i)
A.push(1000000)
count = 0
tmp = 0
(0..N-1).each do |i|
  tmp += A[i]
  if tmp + A[i+1] > K
    count += 1
    tmp = 0
  end
end

puts count