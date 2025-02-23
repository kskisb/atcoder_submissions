N = gets.to_i
S = gets.chomp

max_length = 0
(1...N).each do |i|
  if S[i] == "/"
    count = 0
    j = 1
    while S[i-j] == "1" && S[i+j] == "2"
      count += 1
      j += 1
    end
    max_length = [max_length, count].max
  end
end

puts max_length*2 + 1
