N = gets.to_i
S = gets.chomp

N.times do |i|
  if S[i] == "1" && i%2 == 0
    puts "Takahashi"
    break
  elsif S[i] == "1" && i%2 == 1
    puts "Aoki"
    break
  end
end