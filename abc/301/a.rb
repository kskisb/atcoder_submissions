N = gets.to_i
S = gets.chomp

if S.count("T") == S.count("A")
  puts S[-1] == "A" ? "T" : "A"
else
  puts S.count("T") > S.count("A") ? "T" : "A"
end
