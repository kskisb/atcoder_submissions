N = gets.to_i
a = gets.split.map(&:to_i)

a.sort!
over_10e8_count = 0
(0...N-1).each do |i|
  j = (i+1...N).bsearch { |j| a[i] + a[j] >= 10**8 }
  if j
    over_10e8_count += N-j
  end
end

ans = 0
(0...N).each do |i|
  ans += a[i]*(N-1)
end

ans -= over_10e8_count * 10**8
puts ans
