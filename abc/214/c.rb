N = STDIN.gets.to_i
S = STDIN.gets.split.map!(&:to_i)
T = STDIN.gets.split.map!(&:to_i)

memo = T.dup
i = 0
while i < 2 * N
  k = i % N
  j = (k + 1) % N
  cand = memo[k] + S[k]
  memo[j] = cand if cand < memo[j]
  i += 1
end

STDOUT.write(memo.join("\n"))