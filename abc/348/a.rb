N = gets.to_i

s = "o"*N

(1..N).each do |i|
  if i%3 == 0
    s[i-1] = "x"
  end
end

puts s