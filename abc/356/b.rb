N, M = gets.chomp.split.map(&:to_i)
A = gets.chomp.split.map(&:to_i)
X = N.times.map { gets.chomp.split.map(&:to_i) }

nutrients = [0]*M
X.each do |x|
  M.times do |i|
    nutrients[i] += x[i]
  end
end

flag = true
M.times do |i|
  if nutrients[i] < A[i]
    flag = false
  end
end

if flag
  puts "Yes"
else
  puts "No"
end