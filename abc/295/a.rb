N = gets.to_i
W = gets.chomp.split

keywords = ["and", "not", "that", "the", "you"]

puts W.any? { |w| keywords.include?(w) } ? "Yes" : "No"
