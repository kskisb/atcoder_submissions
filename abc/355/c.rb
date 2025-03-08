N, T = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)

row = Array.new(N, 0)
column = Array.new(N, 0)
diagonal_ul2lr = 0
diagonal_ll2ur = 0

(0...T).each do |i|
  x = (A[i]-1) / N
  y = (A[i]-1) % N
  row[x] += 1
  column[y] += 1
  if x == y
    diagonal_ul2lr += 1
  end
  if x == N-1-y
    diagonal_ll2ur += 1
  end

  if row[x] == N || column[y] == N || diagonal_ul2lr == N || diagonal_ll2ur == N
    puts i+1
    exit
  end
end

puts -1
