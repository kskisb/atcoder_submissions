S, k = gets.chomp.split(' ')

permutations = S.chars.permutation.map(&:join).uniq.sort
puts permutations[k.to_i - 1]