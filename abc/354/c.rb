N = gets.to_i
cards = Array.new(N+1)
cards[0] = [[-1, -1], -1]
N.times do |i|
  inputs = gets.split.map(&:to_i)
  cards[i+1] = [[inputs[1], inputs[0]], i+1]
end

cards.sort_by! { |card| card[0] }

ans = []
now_a = cards[0][0][1]
(1..N).each do |i|
  if now_a < cards[i][0][1]
    ans << cards[i][1]
    now_a = cards[i][0][1]
  end
end

puts ans.size
puts ans.sort!.join(' ')
