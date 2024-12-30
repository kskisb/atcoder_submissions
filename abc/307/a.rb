N = gets.to_i
A = gets.split.map(&:to_i)

B = []
weekly_records = 0
(0..N*7-1).each do |i|
  weekly_records += A[i]
  if i%7 == 6
    B << weekly_records
    weekly_records = 0
  end
end

puts B.join(" ")
