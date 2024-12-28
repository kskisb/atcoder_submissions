N = gets.to_i
S = gets.chomp

flag = N.odd?
if flag
  first_S = S[0..(N/2-1)]
  last_S = S[(N/2+1)..(N-1)]

  if S[N/2] != "/"
    flag = false
  end

  if first_S.include?("2") || last_S.include?("/")
    flag = false
  end

  if last_S.include?("1") || last_S.include?("/")
    flag = false
  end
end

if flag || S == "/"
  puts "Yes"
else
  puts "No"
end
