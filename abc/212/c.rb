N, M = gets.split.map(&:to_i)
a = gets.split.map(&:to_i)
b = gets.split.map(&:to_i)

b.sort!
ans = 1e10

N.times do |i|
  idx = b.bsearch_index { |x| x >= a[i] }
  ans = [ans, (b[idx]-a[i]).abs].min if idx
  ans = [ans, (b[idx-1]-a[i]).abs].min if idx && idx > 0
  ans = [ans, (b[M-1]-a[i]).abs].min if idx.nil?
end

puts ans