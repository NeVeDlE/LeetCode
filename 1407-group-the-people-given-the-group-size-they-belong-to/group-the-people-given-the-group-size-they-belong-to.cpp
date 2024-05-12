class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        vector<vector<int> > ans;
        vector<bool>vis(g.size(),0);
        for(int i=0;i<g.size();i++){
        vector<int> v;
        for(int j=0;j<g.size();j++){
            if(g[i]==g[j]&&v.size()<g[i]&&!vis[j]){
            v.push_back(j);
            vis[j]=1;
            }
        }
    
        if(v.size()>0)
        ans.push_back(v);
    }
    return ans;
        
    }
};