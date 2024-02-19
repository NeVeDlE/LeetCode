class Solution {
public:
    string removeDuplicates(string s) {
 
 string ans="";
 stack<char>ss;

 for(int i=s.size()-1;i>=0;i--){
if(!ss.empty()&&s[i]==ss.top())ss.pop();
else ss.push(s[i]);
 }
 while(!ss.empty()){
     ans+=ss.top();
     ss.pop();
 }
return ans;
    
    }
};