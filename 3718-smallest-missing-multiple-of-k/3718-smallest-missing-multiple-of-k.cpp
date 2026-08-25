class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector <int> f(101,0);
        for(int x:nums)f[x]++;
        for(int i=1;;i++){
            if((k*i)>=100)return k*i;
            if(!f[k*i])return k*i;
        }
        return -1;
    }
};