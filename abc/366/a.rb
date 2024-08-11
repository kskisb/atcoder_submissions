N, T, A = gets.chomp.split.map(&:to_i)

if N/2 < T || N/2 < A then
  puts "Yes"
else
  puts "No"
end