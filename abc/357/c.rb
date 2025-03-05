N = gets.to_i
carpets = Array.new(N+2) { |i| Array.new(3**i) { Array.new(3**i, "#") } }

carpets[1][1][1] = "."

(2..N).each do |i|
  (0...3**i).each do |j|
    (0...3**i).each do |k|
      if (j >= 3**(i-1) && j < 2*3**(i-1)) && (k >= 3**(i-1) && k < 2*3**(i-1))
        carpets[i][j][k] = "."
      else
        carpets[i][j][k] = carpets[i-1][j%3**(i-1)][k%3**(i-1)]
      end
    end
  end
end

puts carpets[N].map { |row| row.join }.join("\n")
