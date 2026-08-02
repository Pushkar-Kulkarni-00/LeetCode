class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int l=0;
        int sum=0;
        for(int t:nums)sum+=t;
        int target=sum-x;
        if(target<0)return -1;
        sum=0;
        int longest=-1;
        for(int r=0;r<n;r++){
            sum+=nums[r];
            while(sum>target){
                sum-=nums[l];
                l++;
            }
            if(sum==target)longest=max(longest,r-l+1);
        }
        return longest==-1?-1:n-longest;
    }
};