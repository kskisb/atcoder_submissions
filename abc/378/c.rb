N = gets.to_i
A = gets.split.map(&:to_i)

b = Array.new(N, -1)
last_seen = {}
(0...N).each do |i|
  if last_seen.key?(A[i])
    b[i] = last_seen[A[i]] + 1
  end
  last_seen[A[i]] = i
end

puts b.join(" ")
