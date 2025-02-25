N = gets.to_i
A = gets.split.map(&:to_i)

cd = 1000000000000
ans = Array.new(N, 1)
(1...N).each do |i|
  if cd != A[i] - A[i-1]
    ans[i] = 2
    cd = A[i] - A[i-1]
  else
    ans[i] = ans[i-1] + 1
  end
end

puts ans.sum
