# TLE
H, W, N = gets.split.map(&:to_i)
T = gets.chomp
S = H.times.map { gets.chomp }

ans = 0
H.times do |i|
  W.times do |j|
    next if S[i][j] == '#'
    now_i = i
    now_j = j
    flag = true
    N.times do |k|
      if T[k] == 'D' && now_i + 1 < H && S[now_i + 1][now_j] == '.'
        now_i += 1
      elsif T[k] == 'U' && now_i - 1 >= 0 && S[now_i - 1][now_j] == '.'
        now_i -= 1
      elsif T[k] == 'R' && now_j + 1 < W && S[now_i][now_j + 1] == '.'
        now_j += 1
      elsif T[k] == 'L' && now_j - 1 >= 0 && S[now_i][now_j - 1] == '.'
        now_j -= 1
      else
        flag = false
        break
      end
    end
    ans += 1 if flag
  end
end

puts ans
