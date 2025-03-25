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
    
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ret;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){  
            int cnt =q.size(); // count the node in current level
            double sum = 0; 
            for(int i = 0; i < cnt;i++){
                
                TreeNode* cur = q.front();
                
                q.pop();
                
                sum +=  cur->val;
                
                if(cur->left != nullptr) q.push(cur->left);
                
                if(cur->right != nullptr) q.push(cur->right);
            }
            ret.push_back(sum/cnt);
        }
        return ret;
    }   
};
