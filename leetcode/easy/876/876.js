/** 
 * Runtime: 72 ms, faster than 88.62% 
 * Memory Usage: 38.3 MB, less than 60.49%
 */

/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var middleNode = function(head) {
  let size = 0;

  let temp = head;
  while(temp) {
    size+=1;
    temp = temp.next;
  }

  size >>= 1;
  temp = head;
  for(let i=0; i<size; ++i) {
    temp = temp.next;
  }

  return temp;
};
