S = gets.chomp
T = gets.chomp

ans = []*(S.length)

now_j = 0
(0..(S.length-1)).each do |i|
  (now_j..(T.length-1)).each do |j|
    if S[i] == T[j]
      ans[i] = j+1
      now_j = j+1
      break
    end
  end
end

puts ans.join(' ')