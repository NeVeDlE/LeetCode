class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
     map<string,int>m;
     string tmp="";
     for(int i=0;i<s1.size();i++){
        if(s1[i]==' '||i==s1.size()-1){
            if(i==s1.size()-1)
            tmp+=s1[i];
            m[tmp]++;
            tmp="";
        }
        else{
            tmp+=s1[i];
        }
     }
     s1=s2;
      for(int i=0;i<s1.size();i++){
        if(s1[i]==' '||i==s1.size()-1){
            if(i==s1.size()-1)
            tmp+=s1[i];
            m[tmp]++;
            tmp="";
        }
        else{
            tmp+=s1[i];
        }
     }
     vector<string>ans;
     for(auto it:m){
        if(it.second==1)ans.push_back(it.first);
     }
     return ans;
    }
};