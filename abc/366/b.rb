N = gets.to_i
S = N.times.map { gets.chomp }

max_length = S.map(&:length).max
ans = []
max_length.times do |i|
  str = ""
  (N-1).downto(0) do |j|
    str += S[j][i] ? S[j][i] : "*"
  end
  puts str.sub(/\*+$/, '')
end
