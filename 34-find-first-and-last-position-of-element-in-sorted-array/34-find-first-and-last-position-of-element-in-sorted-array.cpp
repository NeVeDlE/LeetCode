class Solution {
public:
    int BSFirst(vector<int>& nums, int target){
        int l=0,r=nums.size()-1,pos=-1,mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(nums[mid]>target){
                r=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                pos=mid;
                r=mid-1;
            }
        }
        return pos;
    }
      int BSLast(vector<int>& nums, int target){
        int l=0,r=nums.size()-1,pos=-1,mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(nums[mid]>target){
                r=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                pos=mid;
                l=mid+1;
            }
        }
        return pos;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
          int l=BSFirst(nums,target),r=BSLast(nums,target);
        if(l==-1||r==-1)return vector<int>{-1,-1};
        else return vector<int>{l,r};
    }
};