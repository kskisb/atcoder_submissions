H, W, x, y = gets.split.map(&:to_i)
S = H.times.map { gets.chomp }
T = gets.chomp

x -= 1
y -= 1
houses = Set.new
T.length.times do |i|
  if T[i] == 'L' && y-1 >= 0 && S[x][y-1] != '#'
    y -= 1
    houses.add([x, y]) if S[x][y] == '@'
  elsif T[i] == 'R' && y+1 < W && S[x][y+1] != '#'
    y += 1
    houses.add([x, y]) if S[x][y] == '@'
  elsif T[i] == 'U' && x-1 >= 0 && S[x-1][y] != '#'
    x -= 1
    houses.add([x, y]) if S[x][y] == '@'
  elsif T[i] == 'D' && x+1 < H && S[x+1][y] != '#'
    x += 1
    houses.add([x, y]) if S[x][y] == '@'
  end
end

puts [x+1, y+1, houses.size].join(' ')
