n, m = gets.chomp.split.map(&:to_i)
H = gets.chomp.split.map(&:to_i)

count = 0
H.each do |h|
  if m >= h
    count += 1
    m -= h
  else
    break
  end
end

puts count