H, W = gets.split.map(&:to_i)
si, sj = gets.split.map(&:to_i)
C = H.times.map { gets.chomp }
X = gets.chomp

si -= 1
sj -= 1
X.length.times do |i|
  if X[i] == 'L' && sj-1 >= 0 && C[si][sj-1] != '#'
    sj -= 1
  elsif X[i] == 'R' && sj+1 <= W-1 && C[si][sj+1] != '#'
    sj += 1
  elsif X[i] == 'U' && si-1 >= 0 && C[si-1][sj] != '#'
    si -= 1
  elsif X[i] == 'D' && si+1 <= H-1 && C[si+1][sj] != '#'
    si += 1
  end
end

puts [si+1, sj+1].join(' ')
