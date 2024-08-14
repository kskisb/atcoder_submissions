N, A = gets.chomp.split.map(&:to_i)
T = gets.chomp.split.map(&:to_i)

time = 0
ans = [] * N
N.times do |i|
  if time > T[i]
    ans[i] = time + A
    time += A
  else
    ans[i] = T[i] + A
    time = T[i] + A
  end
end

puts ans