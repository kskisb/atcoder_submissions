N, K = gets.split.map(&:to_i)
S = gets.chomp

i = 0
count = 0
while i+K <= N
  if S[i..i+K-1] == "O"*K
    count += 1
    i += K
  else
    i += 1
  end
end

puts count
