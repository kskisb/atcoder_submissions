def p_fact(n)
  factors = []
  (2..Math.sqrt(n).to_i).each do |i|
    while n % i == 0
      n /= i
      factors << i
    end
  end
  factors << n if n != 1
  factors
end

N, M = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)

is_prime = Array.new(100005, true)

A.each do |a|
  primes = p_fact(a)
  primes.each do |p|
    next if !is_prime[p]
    (p...100005).step(p) do |j|
      is_prime[j] = false
    end
  end
end

ans = []
(1..M).each do |i|
  ans << i if is_prime[i]
end

puts ans.size
puts ans