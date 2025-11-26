N = gets.to_i
h = {}

N.times do
  s, t = gets.chomp.split
  h[s] = t.to_i
end

h = h.sort_by { |_, v| -v }.to_h

puts h.keys[1]