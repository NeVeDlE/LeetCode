class Solution {
public:
    int findClosest(int x, int y, int z) {
        int first=abs(x-z);
        int second=abs(y-z);
        if(first==second)return 0; 
        return first<second?1:2;
    }
};