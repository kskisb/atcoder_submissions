S = 8.times.map { gets.chomp }

fields = Set.new

8.times do |i|
  8.times do |j|
    if S[i][j] == '#'
      8.times do |k|
        fields.add([k, j])
        fields.add([i, k])
      end
    end
  end
end

puts 64 - fields.size
