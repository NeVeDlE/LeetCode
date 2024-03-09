class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        for(int i=0;i<nums1.size();i++)m[nums1[i]]++;
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums2.size();i++){
            if(m[nums2[i]])return nums2[i];
        }
        return -1;
    }
};