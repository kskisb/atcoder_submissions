N = gets.to_i
s = gets.chomp
Q = gets.to_i

replaced = {}
('a'..'z').each do |char|
  replaced[char] = char
end

Q.times do
  c, d = gets.split.map(&:strip)

  ('a'..'z').each do |char|
    if replaced[char] == c
      replaced[char] = d
    end
  end
end

result = s.each_char.map { |c| replaced[c] }.join
puts result
