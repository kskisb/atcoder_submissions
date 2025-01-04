def palindrome?(str)
  str == str.reverse
end

N = gets.to_i
S = N.times.map { gets.chomp }

flag = false
(0..N-1).each do |i|
  (i+1..N-1).each do |j|
    str1 = S[i] + S[j]
    str2 = S[j] + S[i]
    flag = palindrome?(str1) || palindrome?(str2) ? true : flag
  end
end

puts flag ? "Yes" : "No"
