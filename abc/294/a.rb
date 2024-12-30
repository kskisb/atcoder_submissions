N = gets.to_i
A = gets.split.map(&:to_i)

ans = []
A.each do |a|
  if a%2 == 0
    ans << a
  end
end

puts ans.join(" ")
