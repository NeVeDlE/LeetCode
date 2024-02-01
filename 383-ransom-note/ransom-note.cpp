class Solution {
public:
    bool canConstruct(string r, string mae) {
        map<char,int>m;map<char,int>n;
        for(int i=0;i<r.size();i++)m[r[i]]++;
          for(int i=0;i<mae.size();i++)n[mae[i]]++;
        for(char i='a';i<='z';i++){
            if(m[i]>n[i])return false;
        }
        return true;
    }
};