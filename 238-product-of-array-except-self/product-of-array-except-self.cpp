class Solution {
public:
  vector<int> productExceptSelf(vector<int>& nums) {
    int product = 1;
    int zeroCount = 0;
    for (int num : nums) {
        if (num == 0) {
            zeroCount++;
        } else {
            product *= num;
        }
    }
    vector<int> result(nums.size(), 0);
    if (zeroCount > 1) {
        return result;
    }
    if (zeroCount == 1) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                result[i] = product;
            }
        }
        return result;
    }
    for (int i = 0; i < nums.size(); i++) {
        result[i] = product / nums[i];
    }
    return result;
}

};