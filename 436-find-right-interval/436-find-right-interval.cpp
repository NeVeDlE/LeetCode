class Solution {
public:
    int BS(vector<vector<int> > &v,int target){
           int l=0,r=v.size()-1,mid;
            int tmp=-1;
            while(l<=r){
                mid=l+(r-l)/2;
                if(v[mid][0]>=target){
                    tmp=mid;
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
        if(tmp==-1)return -1;
        return v[tmp][1];
    }
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
      vector<vector<int> > v;
        for(int i=0;i<intervals.size();i++){
            v.push_back({intervals[i][0],i});
        }
        sort(v.begin(),v.end());
        vector<int> ans;
        for(int i=0;i<intervals.size();i++){
            ans.push_back(BS(v,intervals[i][1]));
        }
        return ans;
    }
};