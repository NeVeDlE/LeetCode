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
    int row=16;
    vector<vector<int>> v;
  vector<int> last;
    void solve(TreeNode* root, int lvl=0){
        if(!root)return;
       v[lvl].push_back(root->val);
 
        solve(root->left,lvl+1);
        solve(root->right,lvl+1);
    }
    void ans(TreeNode* root, int lvl=0){
        if(!root)return;
        
        root->val=v[lvl][last[lvl]];
        last[lvl]++;
        ans(root->left,lvl+1);
        ans(root->right,lvl+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
    v.resize(16);
        last.resize(16);
      
    solve(root);
          for(int i=0;i<16;i++){
            if(i%2!=0)
            reverse(v[i].begin(),v[i].end());
        }
      /*  for(int i=0;i<16;i++){
            if(!v[i].size())break;
            for(int j=0;j<v[i].size();j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }*/
  ans(root);
        return root;
    }
};