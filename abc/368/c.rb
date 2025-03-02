N = gets.to_i
H = gets.split.map(&:to_i)

t = 0
(0...N).each do |i|
  h = H[i]
  num = H[i] / 5
  t += num*3
  h -= num*5
  while h > 0
    t += 1
    if t%3 == 0
      h -= 3
    else
      h -= 1
    end
  end
end

puts t
