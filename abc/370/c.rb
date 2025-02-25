s = gets.chomp
t = gets.chomp

x = []
(0...s.size).each do |i|
  lex_min_s = "zzzzzzzzzzzzzzzzzzzzzzzzzzzz"
  (0...s.size).each do |j|
    if s[j] != t[j]
      tmp_s = s[0...j] + t[j] + s[j+1..-1]
      lex_min_s = tmp_s if tmp_s < lex_min_s
    end
  end

  if lex_min_s == "zzzzzzzzzzzzzzzzzzzzzzzzzzzz"
    next
  end

  x << lex_min_s
  s = lex_min_s
end

puts x.size
puts x
