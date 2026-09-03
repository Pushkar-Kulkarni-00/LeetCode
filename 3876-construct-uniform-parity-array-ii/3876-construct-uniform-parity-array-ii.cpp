class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int m=INT_MAX;
        for(int x:nums1)if(x<m)m=x;
        if(m&1)return 1;
        for(int x:nums1)if(x&1)return 0;
        return 1;
    }
};