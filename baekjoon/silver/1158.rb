# https://www.acmicpc.net/problem/1158
class Node
  attr_accessor :data, :next

  def initialize(data, _next=nil)
    @data = data
    @next = _next
  end
end

class CircularSLL
  def initialize()
    @last = nil
    @start = nil
  end

  def insert_back(value)
    new_node = Node.new(value)

    if @last == nil
      @last = new_node
      @last.next = @last
    else
      new_node.next = @last.next
      @last.next = new_node
      @last = new_node
      @start = @last
    end
  end

  def remove_nth(n)
    curr = @start
    for i in 0...(n-1)
      curr = curr.next
    end
    @start = curr.next
    curr.next = curr.next.next
    return @start.data
  end
end

list = CircularSLL.new()
k, n = gets.split.map(&:to_i)
if k == 0
  puts "<>"
elsif k == 1
  puts "<#{1}>"
else
  1.upto(k) do |x|
    list.insert_back(x)
  end

  x = []
  for i in 0...k
    x.push(list.remove_nth(n))
  end

  print "<"
  for i in 0...(x.size-1)
    print "#{x[i]}, "
  end
  puts "#{x[x.size-1]}>"
end
