class Solution {
public:
    bool wordPattern(string s, string t) {
        map<char,string>m;
        map<string,int>n;
        int j=0;
        string tmp="";
        for(int i=0;i<s[i];i++){
            for(int ii=j;ii<t.size();ii++){
                if(t[ii]==' '||ii==t.size()-1){
                 tmp=t.substr(j,ii-j);
                 if(ii==t.size()-1)tmp=t.substr(j,ii-j+1);
                 j=ii+1;
                    break;
                }
            }
        if(m[s[i]]==""){
              if(n[tmp])return false;
             n[tmp]++;
             m[s[i]]=tmp;
        }
        else{
                if(m[s[i]]!=tmp)return false;
        }
        }
    int cnt=count(t.begin(),t.end(),' ')+1;
 //   cout<<s.size()<<""<<cnt<<endl;
    if(cnt!=s.size())return false;
        return true;
    }
};