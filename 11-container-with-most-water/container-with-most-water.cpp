class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0,r=h.size()-1;
        int ans=0;
        while(l<r){
            ans=max(ans,min(h[r],h[l])*(r-l));
            if(h[l]<h[r]){
                l++;
            }
          else  if(h[l]>h[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return ans;
    }
};