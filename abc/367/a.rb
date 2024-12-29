A, B, C = gets.chomp.split.map(&:to_i)

if (C < A && A < B) || (A < B && B < C) || (B < C && C < A)
  puts "Yes"
else
  puts "No"
end
