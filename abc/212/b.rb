password = gets.chomp

flag = false
flag = true if password.chars.uniq.size == 1

cnt = 0
(0...3).each do |i|
  cnt += 1 if (password[i].to_i+1)%10 == password[i+1].to_i
end

puts !flag && cnt != 3 ? "Strong" : "Weak"