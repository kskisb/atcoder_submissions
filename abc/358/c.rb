N, M = gets.split.map(&:to_i)
S = N.times.map { gets.chomp }

ans = N
(0...(1 << N)).each do |bit|
  str = "x"*M
  (0...N).each do |i|
    if bit & (1 << i) != 0
      (0...M).each do |j|
        str[j] = 'o' if S[i][j] == 'o'
      end
    end
  end
  if str == "o"*M
    ans = [ans, bit.to_s(2).count("1")].min
  end
end

puts ans
