N, M = gets.split.map(&:to_i)
graph = Array.new(N) { [] }

M.times do
  a, b = gets.split.map(&:to_i)
  graph[a-1] << (b-1)
  graph[b-1] << (a-1)
end

visited = Array.new(N, false)
dist = Array.new(N, 0)
queue = [0]
visited[0] = true

ans = Array.new(N, 0)
ans[0] = 1

while !queue.empty?
  v = queue.shift
  graph[v].each do |nv|
    if visited[nv]
      ans[nv] += ans[v] if dist[v] + 1 == dist[nv]
      ans[nv] %= 1_000_000_007
      next
    end

    ans[nv] += ans[v]
    ans[nv] %= 1_000_000_007
    visited[nv] = true
    dist[nv] = dist[v] + 1
    queue << nv
  end
end

puts ans[N-1]