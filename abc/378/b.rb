N = gets.to_i
q, r = N.times.map { gets.chomp.split.map(&:to_i) }.transpose
Q = gets.to_i

Q.times do
  t, d = gets.split.map(&:to_i)
  puts d % q[t-1] <= r[t-1] ? d + (r[t-1] - d % q[t-1]) : d + (q[t-1] - d % q[t-1] + r[t-1])
end
