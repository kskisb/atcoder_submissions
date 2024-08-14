S = gets.chomp

count = 0
S.each_char do |s|
  if s == s.upcase
    count += 1
  end
end

if count > (S.length)/2
  puts S.upcase
else
  puts S.downcase
end