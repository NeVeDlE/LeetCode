class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
     vector<int>v(nums.size(),0);
     stack<int>s;
     for(int i=0;i<nums.size();i++){
        while(!s.empty()&&nums[s.top()]<nums[i]){
       v[s.top()]=i-s.top();
       s.pop();
        }
        s.push(i);
        

     }
     return v;
     
     }

};