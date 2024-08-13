S = gets.chomp

alphabets = Hash.new(0)

(S.length).times do |i|
  alphabets[S[i]] += 1
end

count = [0]*(S.length + 1)
alphabets.each do |key, val|
  count[val] += 1
end

flag = true
count.each do |c|
  if c != 0 && c != 2
    flag = false
  end
end

if flag
  puts "Yes"
else
  puts "No"
end