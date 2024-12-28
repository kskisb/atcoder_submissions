A = gets.chomp.split.map(&:to_i)

A.sort!

count = 0
i = 1
while i < A.length
  if A[i-1] == A[i]
    count += 1
    i += 1
  end
  i += 1
end

puts count
