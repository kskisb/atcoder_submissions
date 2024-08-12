s = gets

s = s.slice(3, 3)

if "001" <= s && s < "350" && s != "316"
  puts "Yes"
else
  puts "No"
end