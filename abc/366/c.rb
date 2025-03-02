Q = gets.to_i

balls = Hash.new(0)
ans = []
Q.times do |q|
  query = gets.chomp.split
  command = query[0].to_i
  x = query[1].to_i if query.length > 1
  if command == 1
    balls[x] += 1
  elsif command == 2
    balls[x] -= 1
    balls.delete(x) if balls[x] == 0
  else
    ans << balls.length
  end
end

puts ans
