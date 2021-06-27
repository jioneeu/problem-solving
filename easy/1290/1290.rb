# Runtime: 60 ms, faster than 27.73%
# Memory Usage: 209.9 MB, less than 29.41%

# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val = 0, _next = nil)
#         @val = val
#         @next = _next
#     end
# end
# @param {ListNode} head
# @return {Integer}
def get_decimal_value(head)
  result = 0

  while true do
    result = result * 2 + head.val
    head = head.next

    break if head == nil
  end

  result
end
