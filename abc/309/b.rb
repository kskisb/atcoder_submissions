N = gets.to_i
a = N.times.map { gets.chomp }

str1 = a[0][0..-2]
str2 = a[0..-2].map { |a| a[-1] }
str3 = a[-1][1..-1]
str4 = a[1..-1].map { |a| a[0] }

a[0][1..-1] = str1
(1..N-1).each do |i|
  a[i][-1] = str2[i-1]
end
a[-1][0..-2] = str3
(0..N-2).each do |i|
  a[i][0] = str4[i]
end

puts a
