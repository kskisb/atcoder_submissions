S = gets.chomp

N = S.length
alphabets = Hash.new(0)
S.each_char do |c|
  alphabets[c] += 1
end

ans = N*(N-1) / 2
alphabets.each do |_, v|
  ans -= v*(v-1) / 2
end

ans += 1 if alphabets.any? { |_, count| count >= 2 }

puts ans
