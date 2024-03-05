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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*>nodes;
        if(root)nodes.push(root);
        bool f=0;
        while(!nodes.empty()){
            int sz=nodes.size();
            while(sz--){
                TreeNode* tmp=nodes.front();
                nodes.pop();
                if(tmp->left){
                    if(f)return false;
                    nodes.push(tmp->left);
                }
                else{
                    f=1;
                }
                 if(tmp->right){
                        if(f)return false;
                    nodes.push(tmp->right);
                }
                else{
                    f=1;
                }
            }

        }
        return true;
    }
};