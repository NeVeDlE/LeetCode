class Solution {
public:
 
    vector<int> searchRange(vector<int>& nums, int target) {
         auto p=equal_range(nums.begin(),nums.end(),target);
        if(p.first==nums.end())return {-1,-1};
        int x=p.first-nums.begin();
        int y=p.second-nums.begin();
        if(nums[x]!=target)return {-1,-1};
        return {x,y-1};
    }
};