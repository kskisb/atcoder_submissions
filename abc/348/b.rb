N = gets.to_i
X = []*N
Y = []*N

N.times do |i|
  X[i], Y[i] = gets.chomp.split.map(&:to_i)
end

ans = []*N

N.times do |i|
  max_length = 0
  point = 0
  N.times do |j|
    if max_length < (X[i]-X[j])*(X[i]-X[j]) + (Y[i]-Y[j])*(Y[i]-Y[j])
      max_length = (X[i]-X[j])*(X[i]-X[j]) + (Y[i]-Y[j])*(Y[i]-Y[j])
      point = j+1
    end
  end
  ans[i] = point
end

ans.each do |a|
  puts a
end