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
private:
int mx{0};
public:
    void solve(TreeNode* root,int h){
        if(!root){
            mx=max(mx,h);
            return;}
            solve(root->left,h+1);
            solve(root->right,h+1);
    }
    int maxDepth(TreeNode* root) {
        solve(root,0);
        return mx;
    }
};