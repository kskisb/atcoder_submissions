S = gets.chomp

if S =~ /\A(A*B*C*)\z/
  puts "Yes"
else
  puts "No"
end
