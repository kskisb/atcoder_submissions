N = gets.to_i
A = gets.split.map(&:to_i)
M= gets.to_i
B = gets.split.map(&:to_i)
L = gets.to_i
C = gets.split.map(&:to_i)
Q = gets.to_i
X = gets.split.map(&:to_i)

sum_of_numbers = Set.new
A.each do |a|
  B.each do |b|
    C.each do |c|
      sum_of_numbers.add(a + b + c)
    end
  end
end

X.each do |x|
  puts sum_of_numbers.include?(x) ? "Yes" : "No"
end
