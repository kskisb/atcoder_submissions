N = gets.to_i
S = N.times.map { gets.chomp }

flag = true

(N-2).times do |i|
  if S[i] == "sweet" && S[i+1] == "sweet" then
    flag = false
  end
end

if flag
  puts "Yes"
else
  puts "No"
end