class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set <int> k;
        for(int x:nums)k.insert(x);
        int n=nums.size();
        for(int i=1;i<=n+1;i++)if(!k.contains(i))return i;
        return -1;
    }
};