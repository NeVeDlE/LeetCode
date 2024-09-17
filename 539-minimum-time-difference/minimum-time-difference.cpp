class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
       vector<int>v;
      
       sort(timePoints.begin(),timePoints.end());
        timePoints.push_back(timePoints[0]);
        for(int i=0;i<timePoints.size();i++){
             string tmp="";
             int cur=0;
          for(int j=0;j<timePoints[i].size();j++){
           if(timePoints[i][j]!=':')
              tmp+=timePoints[i][j];
            if(timePoints[i][j]==':'){
                 cur=stoi(tmp)*60;
                tmp="";
            }
            if(j==timePoints[i].size()-1){
                 cur+=stoi(tmp);
                v.push_back(cur);
            }
        }
    }
    int ans=INT_MAX;
    for(int i=0;i<v.size()-1;i++){
        ans=min(ans,abs(v[i]-v[i+1]));
        ans=min(ans,abs(v[i]-(v[i+1]+1440)));
    }
    return ans;
 
    }
};