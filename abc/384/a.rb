n, c1, c2 = gets.chomp.split
S = gets.chomp

n = n.to_i
n.times do |i|
  if S[i] != c1
    S[i] = c2
  end
end

puts S
