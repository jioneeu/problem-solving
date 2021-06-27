# Runtime: 76 ms, faster than 11.36%
# Memory Usage: 209.8 MB, less than 50.00%

# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val = 0, _next = nil)
#         @val = val
#         @next = _next
#     end
# end
# @param {ListNode} head
# @return {ListNode}
def middle_node(head)
  cnt = 0

  temp = head
  while temp
    cnt += 1
    temp = temp.next 
  end

  cnt >>= 1
  temp = head
  for i in (0...cnt) do
    temp = temp.next 
  end

  temp
end
