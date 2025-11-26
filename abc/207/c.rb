N = gets.to_i

l = Array.new(N)
r = Array.new(N)

N.times do |i|
  t, l[i], r[i] = gets.split.map(&:to_i)
  if t == 2
    r[i] -= 0.5
  elsif t == 3
    l[i] += 0.5
  elsif t == 4
    l[i] += 0.5
    r[i] -= 0.5
  end
end

ans = 0
(0...N).each do |i|
  (i+1...N).each do |j|
    ans += 1 if [l[i], l[j]].max <= [r[i], r[j]].min
  end
end

puts ans