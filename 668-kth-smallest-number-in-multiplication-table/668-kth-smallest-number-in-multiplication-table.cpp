class Solution {
public:
    int countL(int rows,int col,int k){
        int count=0;
        for(int i=1;i<=rows;i++){
            count+=min(k/i,col);
        }
        return count;
    }
    int findKthNumber(int m, int n, int k) {
     int l=1,r=m*n,mid;
        int ans=-1;
        while(l<=r){
            mid=l+(r-l)/2;
            int tmp=countL(m,n,mid);
            if(tmp<k){
                l=mid+1;
            }
            else{
                cout<<mid<<endl;
                r=mid-1;
                ans=mid;
            }
        }
        return ans;
    }
};