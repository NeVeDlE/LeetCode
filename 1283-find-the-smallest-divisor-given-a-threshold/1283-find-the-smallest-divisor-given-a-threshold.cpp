class Solution {
public:
    #define fast() ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);srand(time(NULL))
    long long sum(vector<int> &nums,int div){
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            int tmp=nums[i]/div;
            if(nums[i]%div!=0)
                tmp++;
            ans+=tmp;
        }
        return ans;
    }
    bool check(long long sum,int target){
        if(sum<=target)return true;
        else return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        fast();
        int l=1,r=1e6,mid;
        int ans=0;
        while(l<=r){
            mid=l+(r-l)/2;
            if(check(sum(nums,mid),threshold)){
                ans=mid;
            //    cout<<mid<<endl;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};