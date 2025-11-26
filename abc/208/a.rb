A, B = gets.split.map(&:to_i)

puts A > B || A*6 < B ? "No" : "Yes"