class Solution {
public:
    int trap(vector<int>& h) {
        vector<int>l(h.size(),0);
            vector<int>r(h.size(),0);
      l[0]=h[0];
      r[h.size()-1]=h[h.size()-1];
      for(int i=1;i<h.size();i++){
          l[i]=max(l[i-1],h[i]);
      }
      for(int i=h.size()-2;i>=0;i--){
          r[i]=max(r[i+1],h[i]);
      }
      int ans=0;
      int tmp=0;
      for(int i=0;i<h.size();i++){
          tmp=min(r[i],l[i])-h[i];
          if(tmp)ans+=tmp;
      }
      return ans;
    }
};