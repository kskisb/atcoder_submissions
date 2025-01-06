H, W = gets.split.map(&:to_i)
A = H.times.map { gets.split.map(&:to_i) }

ans = Array.new(H) { Array.new(W, '.') }

(0..H-1).each do |i|
  (0..W-1).each do |j|
    if A[i][j] != 0
      ans[i][j] = ('A'.ord + A[i][j] - 1).chr
    end
  end
end

H.times do |i|
  puts ans[i].join
end