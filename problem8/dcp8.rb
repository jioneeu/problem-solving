class Node
  attr_accessor :data, :left, :right
  def initialize(data = 0, left = nil, right = nil)
    @data = data
    @left = left
    @right = right
  end
end

def helper(root)
  return 0, true if !root

  left_cnt, is_left_unival = helper(root.left)
  right_cnt, is_right_unival = helper(root.right)
  cnt = left_cnt + right_cnt

  if is_left_unival and is_right_unival
    if root.left && root.data != root.left.data
      return cnt, false
    end

    if root.right && root.data != root.right.data
      return cnt, false
    end

    return cnt+1, true
  end

  return cnt, true
end

def count_unival_subtrees(root)
  count, _ = helper(root)
  count
end
root = Node.new(0)
root.left = Node.new(1)
root.right = Node.new(0)

root.right.left = Node.new(1)
root.right.right = Node.new(0)

root.right.left.left = Node.new(1)
root.right.left.right = Node.new(1)

puts count_unival_subtrees(root)
