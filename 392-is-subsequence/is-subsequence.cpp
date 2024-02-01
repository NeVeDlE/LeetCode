class Solution {
public:
    bool isSubsequence(string s, string t) {
        int r=0,l=0;
        for(int i=0;i<t.size();i++){
            if(r>=s.size())break;
            if(s[r]==t[i])r++;
        }
        if(r==s.size())return true;
        return false;
    }
};