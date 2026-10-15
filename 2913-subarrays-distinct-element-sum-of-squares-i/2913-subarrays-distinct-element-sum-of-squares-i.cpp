class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            unordered_set <int> k;
            for(int j=i;j<n;j++){
                if(!k.count(nums[j]))k.insert(nums[j]);
                int t=k.size();
                ans+=t*t;;
            }
        }
        return ans;
    }
};