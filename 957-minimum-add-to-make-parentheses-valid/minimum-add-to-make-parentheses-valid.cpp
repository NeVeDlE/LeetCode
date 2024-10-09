class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0;
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'&&!st.empty()&&st.top()=='(')st.pop();
            else{
                st.push(s[i]);
            }
        }
        int l=0,r=0;
        while(st.size()){
         if(st.top()==')')r++;
         else l++;
         st.pop();
        }
        return abs(l+r);
    }
};