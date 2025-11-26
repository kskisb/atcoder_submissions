def factorial(n)
  (1..n).reduce(:*) || 1
end

def combinations(n, k)
  if k < 0 || k > n
    return 0
  end
  factorial(n) / (factorial(k) * factorial(n - k))
end

A, B, k = gets.split.map(&:to_i)

c = combinations(A+B, A)

a = A
b = B
k -= 1
ans = ""
(A+B).times do |i|
  if a > 0
    if k < combinations(a+b-1, b)
      ans << "a"
      a -= 1
    else
      ans << "b"
      k -= combinations(a+b-1, b)
      b -= 1
    end
  else
    ans << "b"
    b -= 1
  end
end

puts ans