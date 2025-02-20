scores = gets.split.map(&:to_i)

answers = []
(1...32).each do |bit|
  tmp_sum = 0
  tmp_str = ""
  (0...5).each do |i|
    if bit & (1 << i) != 0
      tmp_sum += scores[i]
      tmp_str += ('A'.ord + i).chr
    end
  end
  answers << [tmp_sum, tmp_str]
end

answers = answers.sort_by { |a| [-a[0], a[1]] }

answers.each do |a|
  puts a[1]
end
