class Array
  def next_permutation!
    return false if size < 2
    i = size - 2
    i -= 1 while i >= 0 && self[i] >= self[i + 1]
    return false if i < 0
    j = size - 1
    j -= 1 while self[j] <= self[i]
    self[i], self[j] = self[j], self[i]
    self[i + 1..-1] = self[i + 1..-1].reverse
    true
  end
end

N, K = gets.split.map(&:to_i)
S = gets.chomp

a = S.chars.map { |c| c.ord - 'a'.ord }
a.sort!

ans = 0

loop do
  ok = true
  (0..N-K).each do |i|
    flag = true
    (0...K).each do |j|
      if a[i+j] != a[i+K-1-j]
        flag = false
        break
      end
    end
    if flag
      ok = false
      break
    end
  end
  ans += 1 if ok
  break unless a.next_permutation!
end

puts ans
