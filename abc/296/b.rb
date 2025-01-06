S = 8.times.map { gets.chomp }

r = nil
c = nil
(0..7).each do |i|
  (0..7).each do |j|
    if S[i][j] == '*'
      r = i
      c = j
    end
  end
end

puts [('a'.ord + c).chr, 8-r].join
