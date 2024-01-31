class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
      string ans="";
        string tmp;
        bool f;
      for(int i=0;i<s[0].size();i++){
        tmp=s[0].substr(0,i+1);
        f=1;

        for(int ii=1;ii<s.size();ii++){
            if(tmp.size()>s[ii].size()){
                f=0;
                break;
            }
            for(int iii=0;iii<tmp.size();iii++){
                if(s[ii][iii]!=tmp[iii]){
                    f=0;
                    break;
                }
            }
        }
        if(f){
            if(tmp.size()>ans.size())ans=tmp;
        }
      }
      return ans;
    }
};