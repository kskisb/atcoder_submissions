N = gets.to_i
S = N.times.map { gets.chomp }

count = 0

S.each do |s|
  if s == "Takahashi"
    count += 1
  end
end

puts count