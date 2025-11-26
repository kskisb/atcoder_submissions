N = gets.to_i
p = gets.split.map(&:to_i)

ans = Array.new(N)

(0...N).each do |i|
  ans[p[i] - 1] = i + 1
end

puts ans.join(" ")