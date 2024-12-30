N = gets.to_i
S = gets.chomp

flag = true
(1..S.length-1).each do |i|
  if S[i] == S[i-1]
    flag = false
  end
end

puts flag ? "Yes" : "No"
