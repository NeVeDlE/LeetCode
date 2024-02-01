class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        vector<int>ans;
        int l=0,r=n.size()-1;
        while(l<r){
            if(n[l]+n[r]>t){
                r--;
            }
            else if(n[l]+n[r]<t){
                l++;
            }
            else{
                ans.push_back(l+1),ans.push_back(r+1);
                break;
            }
        }
        return ans;
    }
};