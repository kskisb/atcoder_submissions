S = gets.chomp

flag = S.length.even? ? true : false

if flag
  i = 0
  while i < S.length
    if S[i] != S[i+1]
      flag = false
    end
    i += 2
  end
end

alphabets = S.chars.uniq
alphabets.each do |a|
  if S.count(a) != 0 && S.count(a) != 2
    flag = false
  end
end

puts flag ? "Yes" : "No"
