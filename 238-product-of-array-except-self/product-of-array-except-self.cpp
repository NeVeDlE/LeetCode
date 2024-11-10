class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int ans = 1;
        bool tried = 0;
        bool z = 0;
        bool zz = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (!nums[i] && !z)
                z = 1;
            else if (!nums[i] && z)
                zz = 1;
            else {
                ans *= nums[i];
                tried = 1;
            }
        }

        if (zz) {
            return vector<int>(nums.size(), 0);
        }
        if (!tried)
            return vector<int>(nums.size(), 0);
        vector<int> tmp;
        if (z) {

            for (int i = 0; i < nums.size(); i++) {
                if (!nums[i])
                    tmp.push_back(ans);
                else
                    tmp.push_back(0);
            }
            return tmp;
        }
        for (int i = 0; i < nums.size(); i++) {
            tmp.push_back(ans / nums[i]);
        }

        return tmp;
    }
};