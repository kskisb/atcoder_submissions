N = gets.to_i
users = {}

t = 0
N.times do |i|
  s, c = gets.chomp.split
  users[s] = c
  t += c.to_i
end

users = users.sort
N.times do |i|
  if t%N == i
    puts users[i][0]
  end
end