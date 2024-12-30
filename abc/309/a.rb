A, B = gets.chomp.split.map(&:to_i)

if A+1 == B && A%3 != 0
  puts "Yes"
else
  puts "No"
end
