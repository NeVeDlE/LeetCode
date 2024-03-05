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
   vector<vector<int> > ans;
    void solve(TreeNode* cur,vector<int>v,int sum,int t){
       if(!cur)return;
       v.push_back(cur->val);
       sum+=cur->val;
       
       if(sum==t&&!cur->left&&!cur->right)ans.push_back(v);
       
       solve(cur->left,v,sum,t);
       solve(cur->right,v,sum,t);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        solve(root,{},0,targetSum);
        return ans;
      
    }
};