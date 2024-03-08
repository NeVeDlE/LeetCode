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
    TreeNode* cur_min(TreeNode* cur){
        while(cur&&cur->left){
            cur=cur->left;
        }
        return cur;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)return nullptr;
        TreeNode* tmp=root;
        if(root->val==key){
            if(!root->left&&!root->right)return nullptr;
            else if(!root->left)root=root->right;
            else if(!root->right)root=root->left;
            else{
                root->val=cur_min(root->right)->val;
                root->right=deleteNode(root->right,root->val);
                tmp=nullptr;
            }
        }
        if(root->val>key)
        root->left=deleteNode(root->left,key);
        if(root->val<key)
        root->right=deleteNode(root->right,key);
        return root;
    }
};