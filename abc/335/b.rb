N = gets.to_i

(0..N).each do |x|
  (0..N).each do |y|
    (0..N).each do |z|
      puts "#{x} #{y} #{z}" if x + y + z <= N
    end
  end
end
