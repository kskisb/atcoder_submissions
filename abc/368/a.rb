N, K = gets.chomp.split.map(&:to_i)
A = gets.chomp.split.map(&:to_i)

B = A[N-K..-1] + A[0..N-K-1]

puts B.join(' ')
