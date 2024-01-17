class Solution {
public:
    int hIndex(vector<int>& v) {
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]>=v.size()-i){
               return v.size()-i;
            }
        }
        return 0;
    }
};