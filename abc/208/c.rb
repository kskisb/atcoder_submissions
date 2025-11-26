N, K = gets.split.map(&:to_i)
a = gets.split.map(&:to_i)

N.times do |i|
  a[i] = [i, a[i], K/N]
end

a.sort_by! { |x| x[1] }

rest = K % N
rest.times do |i|
  a[i][2] += 1
end

a.sort_by! { |x| x[0] }
N.times do |i|
  puts a[i][2]
end