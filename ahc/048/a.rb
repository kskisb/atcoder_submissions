N, K, H, T, D = gets.split.map(&:to_i)
c_own, m_own, y_own = K.times.map { gets.chomp.split.map(&:to_i) }.transpose
c_target = []
m_target = []
y_target = []

H.times do
  c, m, y = gets.split.map(&:to_i)
  c_target << c
  m_target << m
  y_target << y
end
