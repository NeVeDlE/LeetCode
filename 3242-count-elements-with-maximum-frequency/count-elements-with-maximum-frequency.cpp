class Solution {
public:
    int arr[101];
    int maxFrequencyElements(vector<int>& nums) {
        int mx = 0;
        int mxN = 0;
        for (int i = 0; i < nums.size(); i++)
            mx = max(mx, ++arr[nums[i]]);
        for (int i = 0; i < nums.size(); i++)
            if (arr[nums[i]] == mx){
                mxN += mx;
                arr[nums[i]]=0;
            }

        return mxN;
    }
};