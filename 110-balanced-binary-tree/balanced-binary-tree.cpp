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
    int depth(TreeNode* cur){
        if(!cur)return 0;
        int l=depth(cur->left);
        int r=depth(cur->right);
        if(l==-1||r==-1||abs(l-r)>1)return -1;
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(depth(root)==-1)return false;
        return true;
    }
};