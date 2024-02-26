class Solution {
public:
    vector<int> asteroidCollision(vector<int>& v) {
        stack<int>s;
        for(int i=0;i<v.size();i++){
            int cur=v[i];
            bool f=0;
            while(!s.empty()&&s.top()>0&&cur<0){
            //    cout<<cur<<" "<<s.top()<<endl;
                if(abs(cur)>s.top()){
                    s.pop();
                    continue;
                }
                else if(abs(cur)==s.top()){
                    s.pop();
                   f=1;
                   break;
                }
                f=1;
                break;
               
            }
            if(!f)s.push(cur);
        }
        vector<int>ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};