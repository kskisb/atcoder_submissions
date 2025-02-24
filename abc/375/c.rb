N = gets.to_i
a = N.times.map { gets.chomp.chars }

(0...N/2).each do |i|
  (0...N/2).each do |j|
    rotation = ([i, j].min + 1) % 4
    rotation.times do |k|
      temp = a[i][j]
      a[i][j] = a[N-1-j][i]
      a[N-1-j][i] = a[N-1-i][N-1-j]
      a[N-1-i][N-1-j] = a[j][N-1-i]
      a[j][N-1-i] = temp
    end
  end
end

a.each { |row| puts row.join }
