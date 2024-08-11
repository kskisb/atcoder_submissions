Y = gets.to_i

if Y % 4 != 0 then
  puts 365
elsif Y%4 == 0 && Y%100 != 0 then
  puts 366
elsif Y%100 == 0 && Y%400 != 0 then
  puts 365
elsif Y%400 == 0
  puts 366
end