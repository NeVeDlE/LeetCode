class KthLargest {
private:
priority_queue<int,vector<int>,greater<int>> q;
int key;
public:
    KthLargest(int k, vector<int>& nums) {
        key=k;
        for(int i=0;i<nums.size();i++){
           add(nums[i]);
        }
    }
    
    int add(int val) {
         if(q.size()<key){
                q.push(val);
            }
            else if(q.top()<val){
                q.pop();
                q.push(val);
            }
            return q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */