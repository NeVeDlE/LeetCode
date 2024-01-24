class Solution {
public:
    int romanToInt(string s) {
    int cnt=0;
    int last=0;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    for(int i=0;i<s.size();i++){
        int cur;
          cout<<cnt<<" "<<s[i]<<endl;
        if(s[i]=='I') cnt+=1;
      
        else if(s[i]=='V'){
              if(i<s.size()-1&&s[i+1]=='I')cnt+=4,i++;
              else    
                cnt+=5;
        }
        else if(s[i]=='X'){
            if(i<s.size()-1&&s[i+1]=='I')cnt+=9,i++;
              else    
                cnt+=10;
        }
        else if(s[i]=='L') {
        if(i<s.size()-1&&s[i+1]=='X')cnt+=40,i++;
              else    
                cnt+=50;
        }
        else if(s[i]=='C') {
        if(i<s.size()-1&&s[i+1]=='X')cnt+=90,i++;
              else    
                cnt+=100;
        }
        else if(s[i]=='D') {
        if(i<s.size()-1&&s[i+1]=='C')cnt+=400,i++;
              else    
                cnt+=500;
        }
        else if(s[i]=='M'){
        if(i<s.size()-1&&s[i+1]=='C')cnt+=900,i++;
              else    
                cnt+=1000;
        }

    } return cnt;
    }
};