N = gets.to_i
A = gets.split.map(&:to_i)

stack = []
(0...N).each do |i|
  now = A[i]
  while stack.last == now
    stack.pop
    now += 1
  end
  stack << now
end

puts stack.size
