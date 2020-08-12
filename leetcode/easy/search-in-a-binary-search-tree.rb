# Definition for a binary tree node.
# class TreeNode
#     attr_accessor :val, :left, :right
#     def initialize(val = 0, left = nil, right = nil)
#         @val = val
#         @left = left
#         @right = right
#     end
# end
# @param {TreeNode} root
# @param {Integer} val
# @return {TreeNode}
def search_bst(root, val)
    return nil if root == nil
    return root if root.val == val
    
    if val < root.val
        search_bst(root.left, val)
    else
        search_bst(root.right, val)
    end
end
