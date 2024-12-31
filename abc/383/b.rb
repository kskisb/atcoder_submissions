H, W, D = gets.split.map(&:to_i)
S = H.times.map { gets.chomp }

ans = 0
(0..H*W-1).each do |k|
  (k+1..H*W-1).each do |l|
    x1 = k / W
    y1 = k % W
    x2 = l / W
    y2 = l % W
    if S[x1][y1] != '.' || S[x2][y2] != '.'
      next
    end
    humidified = Set.new
    H.times do |i|
      W.times do |j|
        if S[i][j] == '.' && ((i-x1).abs + (j-y1).abs <= D || (i-x2).abs + (j-y2).abs <= D)
          humidified.add([i, j])
        end
      end
    end
    ans = [ans, humidified.size].max
  end
end

puts ans
