N = gets.to_i
a = gets.split.map(&:to_i)

N.times do |i|
  a[i] = [a[i], i]
end

a.sort_by! { |x| x[0] }

puts a[-2][1] + 1