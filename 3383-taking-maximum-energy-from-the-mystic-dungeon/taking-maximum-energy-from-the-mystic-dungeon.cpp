class Solution {
public:
   int solve(vector<int>& energy, int k,int i,vector<int>& mem){
        if(i>=energy.size())return 0;
       if(~mem[i])return mem[i];
        int mx=solve(energy,k,i+k,mem)+energy[i];
        mem[i]=mx;
        return mx;
        
    }
  
    int maximumEnergy(vector<int>& energy, int k) {
            vector<int> mem(energy.size(),-1);
        int mx=INT_MIN;
        for(int i=0;i<energy.size();i++)
       mx=max(mx,solve(energy,k,i,mem));
        return mx;
        
    }
};