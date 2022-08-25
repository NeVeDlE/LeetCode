class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ans=0;
        if(nums.size()<3)return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]==0)continue;
            for(int j=i+1;j<nums.size()-1;j++){
               int tmp=lower_bound(nums.begin(),nums.end(),nums[i]+nums[j])-nums.begin();
               ans+=tmp-j-1;
            }
        }
        return ans;
    }
};