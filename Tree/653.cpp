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
    void postorder(TreeNode *root,vector<int> &v){
        if(!root) return ;
        postorder(root->left,v);
        postorder(root->right,v);
        v.push_back(root->val);
    }
    
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        postorder(root,v);
        
        map<int,int> mp;
        
        for(auto i:v){
            mp[i]++;
        }
        
        for(auto i:v){
            if(i != k - i && mp[i] && mp[k - i]) return true;
            if(i == k - i && mp[i] >= 2) return true;
        }
        
        return false;
        
    }
};
