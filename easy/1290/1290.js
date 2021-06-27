/**
 * Runtime: 68 ms, faster than 97.66%
 * Memory Usage: 38.6 MB, less than 52.36%
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
 * @return {number}
 */
var getDecimalValue = function(head) {
  let result = 0;

  while (true) {
    result = result * 2 + head.val;
    if (head.next === null) break;
    head = head.next;
  }

  return result;
};
