H, W, N = gets.split.map(&:to_i)
a, b = N.times.map { gets.chomp.split.map(&:to_i) }.transpose

sorted_a = a.sort.uniq
sorted_b = b.sort.uniq

ans = []
N.times do |i|
  row_id = sorted_a.bsearch_index { |v| v >= a[i] } || sorted_a.size
  col_id = sorted_b.bsearch_index { |v| v >= b[i] } || sorted_b.size

  puts "#{row_id + 1} #{col_id + 1}"
end