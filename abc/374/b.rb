S = gets.chomp
T = gets.chomp

if S == T
  puts 0
else
  longer = [S.length, T.length].max
  (0..longer).each do |i|
    if S[i] != T[i]
      puts i + 1
      break
    end
  end
end
