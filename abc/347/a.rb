N, K = gets.chomp.split.map(&:to_i)
A = gets.chomp.split.map(&:to_i)

ans = []
A.each do |a|
  if a%K == 0
    ans.push(a/K)
  end
end

puts ans.join(' ')