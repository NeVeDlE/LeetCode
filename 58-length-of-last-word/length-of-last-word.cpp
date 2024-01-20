class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int cnt=0;
        int i=0;
        while(s[i]==' '){
            i++;
        }
        for(;i<s.size();i++){
            if(s[i]!=' '){
                cnt++;   
            }
            else break;
        }
        return cnt;
    }
};