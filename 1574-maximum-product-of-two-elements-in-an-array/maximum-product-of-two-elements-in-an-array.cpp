class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i=0;i<nums.size();i++){
            if(q.size()<2)q.push(nums[i]);
            else if(q.top()<nums[i]){
                q.pop();
                q.push(nums[i]);
            }
        }
        int n=q.top()-1;
        q.pop();
        return n*(q.top()-1);
    }
};