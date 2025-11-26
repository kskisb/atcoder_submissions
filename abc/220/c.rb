N = gets.to_i
A = gets.split.map(&:to_i)
X = gets.to_i

a_sum = A.sum
ans = X / a_sum
rem = X - ans * a_sum
ans = ans * N
A.each do |a|
  break if rem < 0
  rem -= a
  ans += 1
end

puts ans