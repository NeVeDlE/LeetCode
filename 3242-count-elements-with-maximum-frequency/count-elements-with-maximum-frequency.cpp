class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int mx=0;
        for(auto i:m){
         mx=max(i.second,mx);
        }
        int ans=0;
        for(auto i:m)if(i.second==mx)ans+=i.second;
        return ans;
    }
};