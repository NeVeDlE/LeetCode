class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>m;  
        map<char,int>n;
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<" "<<t[i]<<endl;
         if(!m[s[i]]){
             if(n[t[i]])return false;
             n[t[i]]++;
             m[s[i]]=t[i];
         }
         else {
             if(m[s[i]]!=t[i])return false;
         }
        }
        return true;
    }
};