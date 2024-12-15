class Solution {
public:
   int removeElement(vector<int>& nums, int val) {
        int n=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){n++;nums[i]=51;}
        }
        sort(nums.begin(),nums.end());
        return nums.size()-n;
    }
};