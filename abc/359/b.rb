N = gets.to_i
A = gets.chomp.split.map(&:to_i)

count = 0
(0..2*N-2).each do |i|
  if A[i] == A[i+2]
    count += 1
  end
end

puts count