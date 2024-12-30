S = gets.chomp.split.map(&:to_i)

flag = (S[0] >= 100 && S[0] <= 675) && S[0]%25 == 0 ? true : false
(1..7).each do |i|
  if S[i-1] > S[i] || (S[i] < 100 && S[i] > 675) || S[i]%25 != 0
    flag = false
  end
end

if flag
  puts "Yes"
else
  puts "No"
end
