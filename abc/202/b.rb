s = gets.chomp

s.reverse!
(0...s.length).each do |i|
  if s[i] == "6"
    s[i] = "9"
  elsif s[i] == "9"
    s[i] = "6"
  end
end

puts s