class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans=1;
        int mx=1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i+1]-s[i]==1)mx++;
            else{
                ans=max(ans,mx);
                mx=1;
            }
             ans=max(ans,mx);
        }
        return ans;
    }
};