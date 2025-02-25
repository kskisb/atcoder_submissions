n, Q = gets.split.map(&:to_i)
s = gets.chomp
s = "XX" + s + "XX"

abc_count = 0
(0..n-1).each do |i|
  if s.slice(i, 3) == "ABC"
    abc_count += 1
  end
end

ans = []

Q.times do |q|
  x, c = gets.split
  x = x.to_i + 1

  abc_count -= 1 if s.slice(x-2, 3) == "ABC"
  abc_count -= 1 if s.slice(x-1, 3) == "ABC"
  abc_count -= 1 if s.slice(x, 3) == "ABC"

  s[x] = c

  abc_count += 1 if s.slice(x-2, 3) == "ABC"
  abc_count += 1 if s.slice(x-1, 3) == "ABC"
  abc_count += 1 if s.slice(x, 3) == "ABC"

  ans.push(abc_count)
end

puts ans
