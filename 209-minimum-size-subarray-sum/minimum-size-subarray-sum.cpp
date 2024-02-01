class Solution {
public:
    int minSubArrayLen(int t, vector<int>& n) {
        int ans=INT_MAX;
        int l=1,r= 1;
        vector<int>pre(n.size()+1,0);
        for(int i=1;i<=n.size();i++) pre[i]=pre[i-1]+n[i-1];
        while(l<=r&&r<pre.size()){
         if(pre[r]-pre[l-1]>=t){
             ans=min(ans,r-l+1);
             l++;
         }
         else r++;

        }
        return ans==INT_MAX ? 0:ans;
    }
};