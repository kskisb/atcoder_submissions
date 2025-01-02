S = gets.chomp

char_count = Hash.new(0)
S.each_char { |char| char_count[char] += 1 }

max_count = char_count.values.max
most_frequent_chars = char_count.select { |k, v| v == max_count }.keys

puts most_frequent_chars.min
