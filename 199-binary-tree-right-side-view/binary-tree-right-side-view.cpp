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
    vector<int> rightSideView(TreeNode* root) {
       queue<TreeNode*>nodes;
       vector<int>ans;
       if(!root)return {};
       nodes.push(root);
       while(!nodes.empty()){
           int sz=nodes.size();
           while(sz--){
              TreeNode* tmp=nodes.front();
              nodes.pop();
              if(sz==0)ans.push_back(tmp->val);
              if(tmp->left)nodes.push(tmp->left);
              if(tmp->right)nodes.push(tmp->right);
           }

           
       }
       return ans;
    }
};