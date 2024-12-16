class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
           if(i!=nums.size()-1&&nums[i]==nums[i+1]){
               nums[i]=101;
               n--;
           }
        }
        sort(nums.begin(),nums.end());
        return n;
    
    }
};