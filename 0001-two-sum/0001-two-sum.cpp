class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> k;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int c=target-nums[i];
            if(k.count(c))return {k[c],i};
            k[nums[i]]=i;
        }
        return {};
    }
};