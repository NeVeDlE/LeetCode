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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         deque<TreeNode*>nodes;
       vector<vector<int> > v;
       if(root)
        nodes.push_back(root);
        int sz;
        bool f=0;
        while(!nodes.empty())
        {
            sz=nodes.size();
            vector<int>ans;
            while(sz--)
            {
                if(!f)
                {
                    TreeNode *tmp=nodes.front();
                    ans.push_back(tmp->val);
                    nodes.pop_front();
                    if(tmp->left)nodes.push_back(tmp->left);
                    if(tmp->right)nodes.push_back(tmp->right);
                }
                else
                {
                    TreeNode *tmp=nodes.back();
                    ans.push_back(tmp->val);
                    nodes.pop_back();
                    if(tmp->right)nodes.push_front(tmp->right);
                    if(tmp->left)nodes.push_front(tmp->left);
                }
            }
            v.push_back(ans);
            f=!f;
        }
        return v;
    }
};