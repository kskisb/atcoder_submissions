N, A, X, Y = gets.split.map(&:to_i)

if N <= A
  puts X * N
else
  puts X * A + Y * (N - A)
end
