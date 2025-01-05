N = gets.to_i
A = N.times.map { gets.split.map(&:to_i)}
B = N.times.map { gets.split.map(&:to_i)}

def rotate_90_degrees(matrix)
  result = Array.new(N) { Array.new(N) }
  (0..N-1).each do |i|
    (0..N-1).each do |j|
      result[j][N-1-i] = matrix[i][j]
    end
  end
  result
end

def check_matrices(a, b)
  (0..N-1).each do |i|
    (0..N-1).each do |j|
      return false if a[i][j] == 1 && b[i][j] == 0
    end
  end
  true
end

flag = false
tmp_a = A
4.times do
  tmp_a = rotate_90_degrees(tmp_a)
  if check_matrices(tmp_a, B)
    flag = true
  end
end

puts flag ? "Yes" : "No"
