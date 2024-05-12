class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
       map<int,int>m;
       
          vector<int> v;
          int mx=0;
           for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            mx=max(m[nums[i]],mx);
           }
              vector<vector<int> > ans(mx);
           for(int i=0;i<nums.size();i++){
            for(int j=0;j<m[nums[i]];j++){
                ans[j].push_back(nums[i]);
            }
            m.erase(nums[i]);
           }
           return ans;
    }
};