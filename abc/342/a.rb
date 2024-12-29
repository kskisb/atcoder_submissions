S = gets.chomp

char_count = Hash.new(0)
S.each_char { |c| char_count[c] += 1 }

unique_char = char_count.key(1)

puts S.index(unique_char) + 1
