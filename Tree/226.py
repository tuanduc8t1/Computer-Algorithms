# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rev(self, node):
        if node is None:
            return
        node.left, node.right = node.right, node.left
        if node.left != None:
            self.rev(node.left)
        if node.right != None:
            self.rev(node.right)

    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        self.rev(root)
        return root
