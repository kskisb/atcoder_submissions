N, M = gets.chomp.split.map(&:to_i)
A = gets.chomp.split.map(&:to_i)
B = gets.chomp.split.map(&:to_i)
c = A + B

c.sort!
flag = false
(0..N+M-2).each do |i|
  if A.include?(c[i]) && A.include?(c[i+1])
    flag = true
  end
end

if flag
  puts "Yes"
else
  puts "No"
end