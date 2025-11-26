N = gets.chomp

digits = N.chars.permutation.map(&:join).uniq
ans = 0
digits.each do |d|
  (1...d.length).each do |i|
    num1 = d[0...i].to_i
    num2 = d[i..-1].to_i
    ans = [ans, num1 * num2].max
  end
end

puts ans