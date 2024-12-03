N, D = gets.chomp.split.map(&:to_i)
S = gets

cnt = 0
S.each_char do |s|
  if s == '.'
    cnt += 1
  end
end

puts [N, cnt + D].min