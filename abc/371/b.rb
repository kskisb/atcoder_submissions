N, M = gets.split.map(&:to_i)
a, B = M.times.map { gets.chomp.split }.transpose
a = a.map(&:to_i)

families = Array.new(N, false)
M.times do |i|
  if families[a[i]-1] == false && B[i] == "M"
    families[a[i]-1] = true
    puts "Yes"
  else
    puts "No"
  end
end
