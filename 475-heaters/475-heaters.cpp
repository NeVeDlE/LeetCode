class Solution {
public:
    #define fast() ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);srand(time(NULL))
    int BSLeft(int house, vector<int>& heaters){
        int l=0,r=heaters.size()-1,mid;
        int ans=-1;
        while(l<=r){
            mid=(l+r)/2;
            if(heaters[mid]<=house){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
     int BSRight(int house, vector<int>& heaters){
        int l=0,r=heaters.size()-1,mid;
        int ans=-1;
        while(l<=r){
            mid=(l+r)/2;
            if(heaters[mid]>=house){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
    
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        fast();
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
              int ans=0;
        for(int i=0;i<houses.size();i++){
           int left=BSLeft(houses[i],heaters);
            int right=BSRight(houses[i],heaters);
          if(left==-1){
              ans=max(heaters[right]-houses[i] ,ans);
          }
            else if(right==-1){
                    ans=max(houses[i]-heaters[left] ,ans);
            }
            else{
              ans=max(min(heaters[right]-houses[i],houses[i]-heaters[left]),ans);
            }

        }
        return ans;
    }
};