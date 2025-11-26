N, Q = gets.split.map(&:to_i)
graph = Array.new(N) { [] }
(N-1).times do
  a, b = gets.split.map(&:to_i)
  graph[a-1] << (b-1)
  graph[b-1] << (a-1)
end

que = []
dist = Array.new(N, -1)
que << 0
dist[0] = 0
while !que.empty?
  t = que.shift
  graph[t].each do |nx|
    if dist[nx] == -1
      dist[nx] = dist[t] + 1
      que << nx
    end
  end
end

Q.times do
  c, d = gets.split.map(&:to_i)
  puts "Town" if dist[c-1].even? == dist[d-1].even?
  puts "Road" if dist[c-1].even? != dist[d-1].even?
end