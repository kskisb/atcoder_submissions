N = gets.to_i

people = []

N.times do
  name, age = gets.chomp.split
  age = age.to_i
  people << { name: name, age: age }
end

start_index = people.index { |person| person[:age] == people.map { |p| p[:age] }.min }

N.times do |i|
  puts people[(start_index + i) % N][:name]
end
