N = gets.to_i

ans = 1
(1..10**6).each do |i|
  tmp = i*i*i

  break if tmp > N

  tmp_str = tmp.to_s
  if tmp_str == tmp_str.reverse
    ans = tmp
  end
end

puts ans
