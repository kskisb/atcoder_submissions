N, d = gets.chomp.split.map(&:to_i)
S = gets

reversed_S = S.reverse
(0..(S.length-1)).each do |i|
  if d != 0 && reversed_S[i] == '@'
    reversed_S[i] = '.'
    d -= 1
  end
end

puts reversed_S.reverse