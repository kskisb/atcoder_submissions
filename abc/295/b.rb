R, C = gets.split.map(&:to_i)
b = R.times.map { gets.chomp }

(0..R-1).each do |i|
  (0..C-1).each do |j|
    if b[i][j] == '#' || b[i][j] == '.'
      next
    end
    (0..R-1).each do |k|
      (0..C-1).each do |l|
        if b[k][l] == '#' && (i-k).abs + (j-l).abs <= b[i][j].to_i
          b[k][l] = '.'
        end
      end
    end
    b[i][j] = '.'
  end
end

puts b
