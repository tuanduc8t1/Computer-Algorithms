/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  TreeNode* increasingBST(TreeNode* root) {
    TreeNode* tree = new TreeNode(0);
    inorder(root,tree);
    return tree->right;
  }
  
  TreeNode* inorder(TreeNode* node, TreeNode* rv) {
    if (node->left) {
      rv = inorder(node->left, rv);
    }
    
    rv->right = node;
    rv = rv->right;
    node->left = NULL;
    
    if (node->right) {
      rv = inorder(node->right, rv);
    }
    return rv;
  }
};
