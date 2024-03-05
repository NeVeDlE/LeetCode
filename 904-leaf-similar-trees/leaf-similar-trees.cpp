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
    vector<int> solve(TreeNode*cur,vector<int>&v){
        if(!cur)return v;
        if(!cur->left&&!cur->right)v.push_back(cur->val);
        solve(cur->left,v);
        solve(cur->right,v);
        return v;
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v;
         vector<int>v1;
        return solve(root1,v)==solve(root2,v1);
    }
};