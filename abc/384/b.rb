N, R = gets.split.map(&:to_i)

rating = R
N.times do
  d, a = gets.split.map(&:to_i)
  if d == 1 && rating >= 1600 && rating < 2800
    rating += a
  elsif d == 2 && rating >= 1200 && rating < 2400
    rating += a
  end
end

puts rating
