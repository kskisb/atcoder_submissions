N, K = gets.split.map(&:to_i)
c = gets.split.map(&:to_i)

candies = Hash.new(0)

K.times do |i|
  candies[c[i]] += 1
end

max_variety = candies.keys.size
variety_count = max_variety

(K...N).each do |i|
  push_candy = c[i]
  pop_candy = c[i-K]

  variety_count += 1 if candies[push_candy] == 0
  candies[push_candy] += 1

  candies[pop_candy] -= 1
  variety_count -= 1 if candies[pop_candy] == 0

  max_variety = [max_variety, variety_count].max
end

puts max_variety