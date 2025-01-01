N, T, P = gets.split.map(&:to_i)
l = gets.split.map(&:to_i)

l = l.map { |l| l-T }
puts l.sort[-P] < 0 ? l.sort[-P].abs : 0
