N, K = gets.split.map(&:to_i)
S = gets.chomp

numbers = S.scan(/0+|1+/)

k_count = 0
swap_x = 0
swap_y = 0
(0...numbers.size).each do |i|
  if numbers[i].include?("1")
    k_count += 1
    if k_count == K-1
      swap_x = i+1
    end
    if k_count == K
      swap_y = i
      break
    end
  end
end

numbers[swap_x], numbers[swap_y] = numbers[swap_y], numbers[swap_x]

puts numbers.join
