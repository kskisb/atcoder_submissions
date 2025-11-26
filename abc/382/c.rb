N, M = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)
B = gets.split.map(&:to_i)
K = 200010

id = Array.new(K, -1)

r = K
(0...N).each do |i|
  while r > A[i]
    r -= 1
    id[r] = i+1
  end
end

(0...M).each do |i|
  puts id[B[i]]
end
