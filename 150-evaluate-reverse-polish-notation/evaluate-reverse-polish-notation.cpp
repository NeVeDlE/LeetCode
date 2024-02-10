class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int>s;
        for(int i=0;i<t.size();i++){
            if(t[i]=="-"){
                int tmp1=s.top();
                s.pop();
                int tmp2=s.top();
                s.pop();
                s.push(tmp2-tmp1);
            }
            else if(t[i]=="+"){
                  int tmp1=s.top();
                s.pop();
                int tmp2=s.top();
                s.pop();
                s.push(tmp2+tmp1);
            }
             else if(t[i]=="*"){
                  int tmp1=s.top();
                s.pop();
                int tmp2=s.top();
                s.pop();
                s.push(tmp2*tmp1);
            }
              else if(t[i]=="/"){
                  int tmp1=s.top();
                s.pop();
                int tmp2=s.top();
                s.pop();
                s.push(tmp2/tmp1);
            }
            else {
              s.push(stoi(t[i]));
            }
        }
      
        return s.top();

    }
};