N = gets.to_i

A = N.times.map { gets.chomp }
B = N.times.map { gets.chomp }

ans_i = 0
ans_j = 0
N.times do |i|
  N.times do |j|
    if A[i][j] != B[i][j]
      ans_i = i+1
      ans_j = j+1
    end
  end
end

puts [ans_i, ans_j].join(' ')