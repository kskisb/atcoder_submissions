N = gets.to_i
a = gets.split.map(&:to_i)

positions = Array.new(N+1)
a.each_with_index do |val, idx|
  positions[val] = idx
end

ans = []

(1..N).each do |i|
  correct_pos = i - 1
  current_pos = positions[i]

  next if correct_pos == current_pos

  j = a[correct_pos]

  ans << [correct_pos + 1, current_pos + 1].sort

  a[correct_pos], a[current_pos] = a[current_pos], a[correct_pos]

  positions[i] = correct_pos
  positions[j] = current_pos
end

puts ans.size
ans.each do |op|
  puts op.join(' ')
end