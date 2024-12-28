N = gets.to_i
S = gets.chomp

count = 0
(1..N-2).each do |i|
  if S[i-1] == "#" && S[i+1] == "#" && S[i] == "."
    count += 1
  end
end

puts count
