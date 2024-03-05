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
    bool solve(TreeNode* root, TreeNode* sub){
        if(!root&&!sub) return true;
       if(!root||!sub||root->val!=sub->val)return false;
       bool ch1=solve(root->left,sub->left);
       bool ch2=solve(root->right,sub->right);
       return ch1&&ch2;

    }
    bool x=0;
    bool isSubtree(TreeNode* root, TreeNode* sub) {
       if(!root) return false;
       if(solve(root,sub)) return true;
       bool ch1= isSubtree(root->left,sub);
       bool ch2=isSubtree(root->right,sub);
       return ch1||ch2;
    }
};