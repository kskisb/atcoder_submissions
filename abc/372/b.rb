m = gets.to_i

n = 0
a = []

i = 10
pow_of_3 = 3 ** 10
while m != 0
  if m >= pow_of_3
    m -= pow_of_3
    a << i
    n += 1
  else
    pow_of_3 = [pow_of_3 / 3, 1].max
    i = [i - 1, 0].max
  end
end

puts n
puts a.join(' ')
