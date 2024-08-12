N = gets.to_i
H = gets.chomp.split.map(&:to_i)

ans = -1
(1..N-1).each do |i|
  if H[0] < H[i]
    ans = i+1
    break
  end
end

puts ans