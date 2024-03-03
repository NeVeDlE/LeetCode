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
    vector<int> inorderTraversal(TreeNode* root) {
    vector<int>ans;
    stack<pair<TreeNode*,bool> >nodes;
    if(root)
    nodes.push(make_pair(root,false));
    while(!nodes.empty()){
        TreeNode* cur=nodes.top().first;
        bool is_done=nodes.top().second;
        nodes.pop();
        if(is_done)ans.push_back(cur->val);
        else{
            if(cur->right)nodes.push(make_pair(cur->right,false));
            nodes.push(make_pair(cur,true));
            if(cur->left)nodes.push(make_pair(cur->left,false));
        }
    }
    return ans;
    
    }
};