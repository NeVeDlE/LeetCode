class Solution {
public:
    int minimumLength(string s) {
        deque<char>q;
        for(int i=0;i<s.size();i++){
            q.push_back(s[i]);
        }
       while(q.front()==q.back()&&q.size()!=1){  
               char s=q.front();
               while(!q.empty()&&q.front()==s){
                   q.pop_front();
               }
               while(!q.empty()&&q.back()==s){
                   q.pop_back();
               }
       }
      return q.size();
    }
};