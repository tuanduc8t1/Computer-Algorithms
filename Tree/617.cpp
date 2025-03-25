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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
      if( root1 == NULL && root2==NULL){
            return NULL;
        }
        TreeNode* res = new TreeNode();
        if(root1!=NULL && root2!=NULL){
            res->val=root1->val+root2->val;
            res->left = mergeTrees(root1->left,root2->left);
            res->right = mergeTrees(root1->right,root2->right);
        }
        else if(root1!=NULL){
            res=root1;
        }else res=root2;
        return res; 
    }
};
