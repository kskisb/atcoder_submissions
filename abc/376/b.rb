N, Q = gets.split.map(&:to_i)
l = 1
r = 2

count = 0
Q.times do
  h, t = gets.chomp.split
  t = t.to_i

  if h == "L"
    to = (t - l) % N
    ng = (r - l) % N
    count += (ng < to) ? N-to : to
    l = t
  else
    to = (t - r) % N
    ng = (l - r) % N
    count += (ng < to) ? N-to : to
    r = t
  end
end

puts count
