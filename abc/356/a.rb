n, l, r = gets.chomp.split.map(&:to_i)
a = [*1..n]

l -= 1
r -= 1
mid = (l+r)/2
(l..mid).each do |i|
  a[i], a[r-i+l] = a[r-i+l], a[i]
end

puts a.join(' ')