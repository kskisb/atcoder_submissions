Q = gets.to_i
que = []

def push(heap, val)
  heap << val
  i = heap.size - 1
  while i > 0
    p = (i - 1) / 2
    break if heap[p] <= heap[i]
    heap[p], heap[i] = heap[i], heap[p]
    i = p
  end
end

def pop(heap)
  return nil if heap.empty?
  min = heap[0]
  heap[0] = heap[-1]
  heap.pop
  i = 0
  while i * 2 + 1 < heap.size
    c1, c2 = i * 2 + 1, i * 2 + 2
    c = (c2 < heap.size && heap[c2] < heap[c1]) ? c2 : c1
    break if heap[i] <= heap[c]
    heap[i], heap[c] = heap[c], heap[i]
    i = c
  end
  min
end

offset = 0
Q.times do
  query = gets.chomp.split.map(&:to_i)
  case query[0]
  when 1
    x = query[1]
    push(que, x - offset)
  when 2
    y = query[1]
    offset += y
  when 3
    min = pop(que)
    puts min + offset
  end
end