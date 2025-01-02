S, T = gets.chomp.split

flag = false
(1...S.length).each do |w|
  (0...w).each do |c|
    now = ""
    (c...S.length).step(w) do |i|
      now += S[i]
    end
    flag = true if now == T
  end
end

puts flag ? "Yes" : "No"
