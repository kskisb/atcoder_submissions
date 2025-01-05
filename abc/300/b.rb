H, W = gets.split.map(&:to_i)
a = H.times.map { gets.chomp.chars }
b = H.times.map { gets.chomp.chars }

flag = false
(0..H-1).each do |s|
  (0..W-1).each do |t|
    tmp_a = a.rotate(s)
    (0..H-1).each do |i|
      tmp_a[i] = tmp_a[i].rotate(t)
    end
    if tmp_a == b
      flag = true
    end
  end
end

puts flag ? "Yes" : "No"
