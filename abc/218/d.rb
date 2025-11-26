N = gets.to_i
v = N.times.map { gets.split.map(&:to_i) }

v.sort!

ans = 0

point_set = v.to_set

(0...N).each do |i|
  (0...N).each do |j|
    if v[i][0] < v[j][0] && v[i][1] < v[j][1]
      if point_set.include?([v[i][0], v[j][1]]) && point_set.include?([v[j][0], v[i][1]])
        ans += 1
      end
    end
  end
end

puts ans