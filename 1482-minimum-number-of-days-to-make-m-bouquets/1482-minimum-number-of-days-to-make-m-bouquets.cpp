class Solution {
public:
    #define fast() ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);srand(time(NULL))
    bool check(vector<int>& bloomDay, int m, int k,int curDay){
        int sum=0,paq=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=curDay){
                sum++;
                if(sum%k==0){
                    paq++;
                }
            }
            else sum=0;
        }
        if(paq>=m)return true;
        return false;
    }
        
    int minDays(vector<int>& bloomDay, int m, int k) {
        int mx=0;
        fast();
        for(int i=0;i<bloomDay.size();i++){
            mx=max(mx,bloomDay[i]);
        }
        int l=0,r=mx,mid;
        int ans=-1;
        while(l<=r){
            mid=(l+r)/2;
            if(check(bloomDay,m,k,mid)){
          //      cout<<mid<<endl;
                ans=mid;
                r=mid-1;
            }
            else{
                    l=mid+1;
                }
        }
        return ans;
        
    }
};