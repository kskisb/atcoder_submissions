S = gets.chomp

x = S.index('B')
y = S.rindex('B')
flag1 = (x + y)%2 != 0 ? true : false

x = S.index('R')
y = S.rindex('R')
z = S.index('K')
flag2 = (x < z && z < y) ? true : false

puts flag1 && flag2 ? 'Yes' : 'No'
