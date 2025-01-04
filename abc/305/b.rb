p, q = gets.chomp.split

dist = [0, 3, 4, 8, 9, 14, 23]

p_index = p.ord - 'A'.ord
q_index = q.ord - 'A'.ord
p_index, q_index = q_index, p_index if p_index > q_index

puts dist[q_index] - dist[p_index]
