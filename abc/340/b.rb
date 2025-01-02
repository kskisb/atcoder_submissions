Q = gets.to_i

a = []
Q.times do
  q, xk = gets.split.map(&:to_i)
  if q == 1
    a << xk
  else
    puts a[-xk]
  end
end
