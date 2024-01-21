class Solution {
public:
    int candy(vector<int>& r) {
        vector<int>pre(r.size(),1);
         vector<int>suf(r.size(),1);
         cout<<pre.size()<<" "<<r.size()<<endl;
        for(int i=0;i<r.size();i++){
            if (i+1<r.size()&&r[i+1]<r[i]&&i>0&&r[i-1]<r[i]){
                 pre[i]=max(pre[i+1],pre[i-1])+1;
             }
          else  if(i>0&&r[i-1]<r[i]){
                pre[i]=pre[i-1]+1;
            } 
             else if(i+1<r.size()&&r[i+1]<r[i]){
                 pre[i]=pre[i+1]+1;
             }
        }
        for(int i=r.size()-1;i>=0;i--){
            if(i>0&&r[i-1]<r[i]&&i+1<r.size()&&r[i+1]<r[i]){
                 cout<<r[i]<<endl;
                 suf[i]=max(suf[i-1],suf[i+1])+1;
             }
           else   if(i>0&&r[i-1]<r[i]){
                suf[i]=suf[i-1]+1;
            } 
          else  if(i+1<r.size()&&r[i+1]<r[i]){
                 suf[i]=suf[i+1]+1;
             } 
            
        }
        int sum=0;
        for(int i=0;i<r.size();i++){
           sum+=max(pre[i],suf[i]);
        }
        return sum;
    }
        
};