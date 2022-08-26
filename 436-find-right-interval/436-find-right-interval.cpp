class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
      vector<pair<int,int> > v;
        map<pair<int,int> ,int> m;
        for(int i=0;i<intervals.size();i++){
            v.push_back({intervals[i][0],intervals[i][1]});
            m[v[i]]=i;
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(int i=0;i<intervals.size();i++){
            int l=0,r=v.size()-1,mid;
            int tmp=-1;
            while(l<=r){
                mid=l+(r-l)/2;
                if(v[mid].first>=intervals[i][1]){
                    tmp=mid;
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            if(tmp!=-1)
            ans.push_back(m[v[tmp]]);
            else ans.push_back(-1);
        }
        return ans;
    }
};