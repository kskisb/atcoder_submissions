N = gets.to_i
a, B = N.times.map { gets.chomp.split }.transpose
a = a.map(&:to_i)

l = a[B.index("L")] if B.include?("L")
r = a[B.index("R")] if B.include?("R")

ans = 0
(0...N).each do |i|
  if B[i] == "R"
    ans += (r-a[i]).abs
    r = a[i]
  else
    ans += (l-a[i]).abs
    l = a[i]
  end
end

puts ans
