N = gets.to_i
now_x = 0.0
now_y = 0.0

ans = 0
N.times do
  x, y = gets.split.map(&:to_i)
  ans += Math.sqrt((x - now_x) ** 2 + (y - now_y) ** 2)
  now_x = x
  now_y = y
end

ans += Math.sqrt((0 - now_x) ** 2 + (0 - now_y) ** 2)

puts ans
