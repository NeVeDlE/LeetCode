class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> q;
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
        }
        int n=q.top()-1;
        q.pop();
        return n*(q.top()-1);
    }
};