class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector <int> t(2,0);
        for(int x:nums1)t[x&1]++;
        if(t[0]==0 || t[1]==0)return true;
        int mino=INT_MAX;
        for(int x:nums1)if(x&1)if(x<mino)mino=x;
        for(int x:nums1)if(x%2==0)if((x-mino)<1)return false;
        return true;
    }
};