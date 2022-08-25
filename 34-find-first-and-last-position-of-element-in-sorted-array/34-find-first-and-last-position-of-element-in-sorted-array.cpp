class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
          int s=0,e=0;
        map<int,int>m;
        for(int i=0;i<nums.size();i++)m[nums[i]]++;
         if(!m[target])return vector<int>{-1,-1};
        s=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        e=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        return vector<int>{s,e-1};
    }
};