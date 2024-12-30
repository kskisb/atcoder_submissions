N = gets.to_i

left = N - N%10
right = left + 5

puts (right - N > N - left) ? left : right
