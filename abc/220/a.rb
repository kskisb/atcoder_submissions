A, B, C = gets.split.map(&:to_i)

(C..B).step(C) do |c|
  if c >= A
    puts c
    exit
  end
end

puts -1