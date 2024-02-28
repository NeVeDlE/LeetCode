class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(0);
            }
            else{
                int last=st.top();
                st.pop();
                if(last==0)  last=1;
                else last*=2;

                if(!st.empty()){
                    int tmp=last+st.top();
                    st.pop();
                    st.push(tmp);
                }
                else{
                     st.push(last);
                }   
            }
        }
          return st.top();
    }
};