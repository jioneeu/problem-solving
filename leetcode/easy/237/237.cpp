/**
 * Runtime: 20 ms, faster than 53.79%
 * Memory Usage: 8 MB, less than 52.59%
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
  public:
    void deleteNode(ListNode* node) {
      node->val = node->next->val;
      ListNode *temp = node->next;
      node->next = node->next->next;
      delete temp;
    }
};
