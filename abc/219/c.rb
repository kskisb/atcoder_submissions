X = gets.chomp
N = gets.to_i
S = N.times.map { gets.chomp }

order = {}
X.chars.each_with_index do |char, index|
  order[char] = index
end

sorted = S.sort do |a, b|
  min_length = [a.length, b.length].min
  result = 0

  min_length.times do |i|
    if order[a[i]] != order[b[i]]
      result = order[a[i]] <=> order[b[i]]
      break
    end
  end

  result = a.length <=> b.length if result == 0
  result
end

sorted.each { |s| puts s }