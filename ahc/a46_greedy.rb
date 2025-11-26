def getDist(p, q, x, y)
  return Math.sqrt((x[p]-x[q])**2 + (y[p]-y[q])**2)
end

N = gets.to_i
X = Array.new(159)
Y = Array.new(159)
P = Array.new(159)
visited = Array.new(159, false)

N.times do |i|
  X[i+1], Y[i+1] = gets.split.map(&:to_i)
end

currentPlace = 1
P[1] = 1
visited[1] = true

(2..N).each do |i|
  minDist = 10000.0
  minId = -1

  (1..N).each do |j|
    next if visited[j]
    newDist = getDist(currentPlace, j, X, Y)
    if minDist > newDist
      minDist = newDist
      minId = j
    end
  end

  visited[minId] = true
  P[i] = minId
  currentPlace = minId
end

P[N+1] = 1

(N+1).times do |i|
  puts P[i+1]
end