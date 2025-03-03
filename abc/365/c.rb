N, M = gets.split.map(&:to_i)
a = gets.split.map(&:to_i)

s = a.sum
if s <= M
  puts "infinite"
  exit
end

ok = 0
ng = 1000000000

while (ng - ok).abs > 1
  mid = (ok + ng) / 2
  tmp = a.map { |v| [mid, v].min }.sum
  if tmp <= M
    ok = mid
  else
    ng = mid
  end
end

puts ok
