N, K = gets.split.map(&:to_i)
R = gets.split.map(&:to_i)

a = []
(1..5).to_a.repeated_permutation(N) do |p|
  flag = true
  (0...N).each do |i|
    flag = false if p[i] > R[i]
  end
  flag = false if p.sum % K != 0
  a << p if flag
end

a.each do |p|
  puts p.join(' ')
end
