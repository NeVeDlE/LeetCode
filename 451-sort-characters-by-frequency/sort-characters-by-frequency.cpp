class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        vector<pair<int,char>>v;
        for(auto i:m){
            v.push_back(make_pair(i.second,i.first));
        }
        sort(v.begin(),v.end());
        string ans="";
        for(int i=v.size()-1;i>=0;i--){
            for(int ii=0;ii<v[i].first;ii++){
                 ans+=v[i].second;
            }
        }

        return ans;
    }
};