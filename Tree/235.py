# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def __init__(self):
        self.res = None
    def order(self, lst, node):
        lst.append(node.val)
        if node.left != None:
            self.order(lst, node.left)
        if node.right != None:
            self.order(lst, node.right)
        return lst
    def find(self, node, fi, se):
        x = list(self.order([], node))
        if fi.val in x and se.val in x:
            self.res = node
            if node.left != None:
                self.find(node.left, fi, se)
            if node.right != None:
                self.find(node.right, fi, se)

    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:
        self.res = root
        self.find(root, p, q)
        return self.res
        
        
