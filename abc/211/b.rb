S = Set.new

4.times do
  S.add(gets.chomp)
end

puts S.size == 4 ? "Yes" : "No"