s_x, s_y = gets.split.map(&:to_i)
t_x, t_y = gets.split.map(&:to_i)

if t_x < s_x
  s_x, t_x = t_x, s_x
  s_y, t_y = t_y, s_y
end

if s_x % 2 == 0 && s_y % 2 == 0 || s_x % 2 == 1 && s_y % 2 == 1
  s_x += 1
end

if t_x % 2 == 1 && t_y % 2 == 0 || t_x % 2 == 0 && t_y % 2 == 1
  t_x -= 1
end

t_y = 2*s_y - t_y if t_y < s_y

ans = t_y - s_y
s_x += t_y - s_y
ans += ((t_x - s_x) / 2.0).ceil if s_x < t_x

puts ans
