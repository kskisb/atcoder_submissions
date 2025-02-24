N, M = gets.split.map(&:to_i)
a, b = M.times.map { gets.chomp.split.map(&:to_i) }.transpose

dx = [1, 2, 2, 1, -1, -2, -2, -1]
dy = [2, 1, -1, -2, -2, -1, 1, 2]

occupied = Set.new
M.times do |i|
  x, y = a[i]-1, b[i]-1
  occupied.add([x, y])
  (0...8).each do |j|
    nx, ny = x+dx[j], y+dy[j]
    if nx >= 0 && nx < N && ny >= 0 && ny < N
      occupied.add([nx, ny])
    end
  end
end

puts N*N - occupied.size
