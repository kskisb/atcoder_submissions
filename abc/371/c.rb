N = gets.to_i

g = Array.new(N) { [] }
h = Array.new(N) { [] }

M_G = gets.to_i
M_G.times do
  u, v = gets.split.map(&:to_i)
  g[u-1] << v-1
  g[v-1] << u-1
end
M_H = gets.to_i
M_H.times do
  a, b = gets.split.map(&:to_i)
  h[a-1] << b-1
  h[b-1] << a-1
end

a = Array.new(N-1)
(0...N-1).each do |i|
  a[i] = gets.split.map(&:to_i)
end

