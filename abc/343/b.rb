N = gets.to_i
A = N.times.map { gets.split.map(&:to_i) }


edges = Array.new(N) { [] }

N.times do |i|
  N.times do |j|
    edges[i] << j+1 if A[i][j] == 1
  end
end

N.times do |i|
  puts edges[i].join(" ")
end
