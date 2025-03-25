/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
public:
    void Preorder(Node* root,vector<int> &result){
        if(!root)return;
        int value=root->val;
        result.push_back(value);
        for(auto it:root->children){
            Node* tmp=it;
            Preorder(tmp,result);
        }
    }
    vector<int> preorder(Node* root){
        vector<int> v;
        Preorder(root,v);
        return v;
    }
};
