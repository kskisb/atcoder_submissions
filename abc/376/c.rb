N = gets.to_i
a = gets.split.map(&:to_i)
b = gets.split.map(&:to_i)

a.sort!.reverse!
b.sort!.reverse!

x = -1
(0...N-1).each do |i|
  if a[i] > b[i]
    if x == -1
      x = a[i]
      b.insert(i, a[i])
    end
  end
end

if x == -1
  x = a[N-1]
else
  (0...N).each do |i|
    if a[i] > b[i]
      x = -1
      break
    end
  end
end

puts x
