def dfs(graph, v, p = -1)
  print(v+1, " ")

  graph[v].each do |nv|
    next if nv == p
    dfs(graph, nv, v)
    print(v+1, " ")
  end
end

N = gets.to_i
graph = Array.new(N) { [] }

(0...N-1).each do
  a, b = gets.split.map(&:to_i)
  graph[a - 1] << b - 1
  graph[b - 1] << a - 1
end

(0...N).each do |i|
  graph[i].sort!
end

dfs(graph, 0)
puts ""