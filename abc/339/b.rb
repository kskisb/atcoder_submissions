H, W, N = gets.split.map(&:to_i)
grid = H.times.map { '.'*W }

now_i = 0
now_j = 0
now_dir = 'U'

N.times do
  if grid[now_i][now_j] == '.'
    grid[now_i][now_j] = '#'
    now_dir = now_dir == 'U' ? 'R' : now_dir == 'R' ? 'D' : now_dir == 'D' ? 'L' : 'U'
    now_i = now_dir == 'U' ? now_i-1 : now_dir == 'D' ? now_i+1 : now_i
    now_j = now_dir == 'L' ? now_j-1 : now_dir == 'R' ? now_j+1 : now_j
  else
    grid[now_i][now_j] = '.'
    now_dir = now_dir == 'U' ? 'L' : now_dir == 'L' ? 'D' : now_dir == 'D' ? 'R' : 'U'
    now_i = now_dir == 'U' ? now_i-1 : now_dir == 'D' ? now_i+1 : now_i
    now_j = now_dir == 'R' ? now_j+1 : now_dir == 'L' ? now_j-1 : now_j
  end
  now_i = H-1 if now_i == -1
  now_i = 0 if now_i == H
  now_j = W-1 if now_j == -1
  now_j = 0 if now_j == W
end

puts grid
