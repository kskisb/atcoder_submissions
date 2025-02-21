H, W, D = gets.split.map(&:to_i)
S = H.times.map { gets.chomp }

dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]
dist = Array.new(H) { Array.new(W, 1000000000) }
que = []

(0...H).each do |h|
  (0...W).each do |w|
    if S[h][w] == "H"
      dist[h][w] = 0
      que.push([h, w])
    end
  end
end

while !que.empty?
  now_h, now_w = que.shift

  (0...4).each do |dir|
    next_h = now_h + dx[dir]
    next_w = now_w + dy[dir]

    next if next_h < 0 || next_h >= H || next_w < 0 || next_w >= W || S[next_h][next_w] == "#"

    if dist[next_h][next_w] > dist[now_h][now_w] + 1
      dist[next_h][next_w] = dist[now_h][now_w] + 1
      que.push([next_h, next_w])
    end
  end
end

ans = 0
(0...H).each do |h|
  (0...W).each do |w|
    ans += 1 if dist[h][w] <= D
  end
end

puts ans
