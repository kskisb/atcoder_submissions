N, M = gets.split.map(&:to_i)
A = (2*N).times.map { gets.chomp }

players = Array.new(2*N) { |i| [0, i] }

puts players.inspect
puts players[0][0][0][0]

(2*N).times do |i|
  M.times do |j|
    N.times do |k|
      if (A[i][players[2*k][1]] == "G" && A[i][players[2*k+1][1]] == "C") || (A[i][players[2*k][1]] == "C" && A[i][players[2*k+1][1]] == "P") || (A[i][players[2*k][1]] == "P" && A[i][players[2*k+1][1]] == "G")
        players[2*k][0] += 1
      end
      if (A[i][players[2*k][1]] == "G" && A[i][players[2*k+1][1]] == "P") || (A[i][players[2*k][1]] == "C" && A[i][players[2*k+1][1]] == "G") || (A[i][players[2*k][1]] == "P" && A[i][players[2*k+1][1]] == "C")
        players[2*k+1][0] += 1
      end
    end
  end
  puts players.inspect
end


(2*N).times do |i|
  puts players[i][1] + 1
end