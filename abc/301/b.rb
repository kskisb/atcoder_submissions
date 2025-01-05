N = gets.to_i
a = gets.split.map(&:to_i)

ans = []
(0..N-2).each do |i|
  if (a[i] - a[i+1]).abs == 1
    ans << a[i]
  elsif a[i] > a[i+1]
    a[i].downto(a[i+1]+1) do |j|
      ans << j
    end
  else
    (a[i]..a[i+1]-1).each do |j|
      ans << j
    end
  end
end
ans << a[-1]

puts ans.join(' ')
