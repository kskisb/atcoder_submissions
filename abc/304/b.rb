N = gets.to_i

ans = -1
if N <= 10**3 - 1
  ans = N
elsif N <= 10**4 - 1
  ans = N - N%10
elsif N <= 10**5 - 1
  ans = N - N%100
elsif N <= 10**6 - 1
  ans = N - N%1000
elsif N <= 10**7 - 1
  ans = N - N%10000
elsif N <= 10**8 - 1
  ans = N - N%100000
elsif N <= 10**9 - 1
  ans = N - N%1000000
end

puts ans
