class Solution {
public:
    int arrangeCoins(int n) {
        long long l=1,r=INT_MAX,mid,tmp;
        long long ans=0;
        while(l<=r){
            mid=l+(r-l)/2;
            tmp=(mid*(mid+1))/2;
            if(tmp>n){
                r=mid-1;
            }
            else {
                if(tmp==n)return mid;
                else{
                    ans=max(ans,mid);
                    l=mid+1;
                }
            }
        }
         return ans;
    }
};