S = 3.times.map { gets.chomp }

contests = ["ABC", "ARC", "AGC", "AHC"]
contests.each do |c|
  if S.include?(c)
    next
  else
    puts c
  end
end