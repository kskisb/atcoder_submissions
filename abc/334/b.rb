def floor(x, m)
  r = (x % m + m) % m
  (x - r) / m
end

A, M, l, r = gets.split.map(&:to_i)

l -= A
r -= A

puts floor(r, M) - floor(l-1, M)
