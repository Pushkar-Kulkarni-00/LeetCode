class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map <long long,bool>k;
        for(long long x:nums)k[x]=true;
        int ans=-1;
        for(long long x:nums){
            int t=1;
            while(k[x*x]){x*=x;t++;}
            if(t>=2)if(t>ans)ans=t;
        }
        return ans;
    }
};