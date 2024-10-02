class Solution {
public:
vector<int> sorted;

    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>m;
        for(int i=0;i<arr.size();i++){
            if(!m[arr[i]])
            sorted.push_back(arr[i]);
            m[arr[i]]++;
        }
        sort(sorted.begin(),sorted.end());
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
     ans.push_back(lower_bound(sorted.begin(),sorted.end(),arr[i])-sorted.begin()+1);
        }
        return ans;
    }
};