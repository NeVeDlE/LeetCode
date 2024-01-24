class Solution {
public:
    int strStr(string s, string a) {
       
      for(int i=0;i<s.size();i++){
          if(s[i]==a[0]){
              int j=0;
              int ii=i;
              while(ii<s.size()&&j<a.size()&&s[ii]==a[j]){
                  ii++,j++;
              }
              if(j==a.size()){
                  cout<<j<<endl;
                  return i;}
          }
      }
      return -1;
    }
};