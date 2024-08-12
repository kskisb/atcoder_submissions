S = gets

flag = false

if S[0] == "R" || (S[1] == "R" && S[2] == "M")
  flag = true;
end

if flag
  puts "Yes"
else
  puts "No"
end