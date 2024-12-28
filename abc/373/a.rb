S = 12.times.map { gets.chomp }

count = 0
(1..12).each do |i|
  if S[i-1].length == i
    count += 1
  end
end

puts count
