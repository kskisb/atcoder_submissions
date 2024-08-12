S = gets

substrings = {}
len = S.length
(0..(len-1)).each do |i|
  (i..(len-2)).each do |j|
    ss = S.slice(i..j)
    substrings[ss] = 1
  end
end

puts substrings.length