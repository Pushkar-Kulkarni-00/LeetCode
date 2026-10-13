class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](const int &a,const int &b){return abs(a)<abs(b);});
        int l=0;
        int r=nums.size()-1;
        int t=1;
        long long ans=0;
        while(l<r){
            ans+=t*nums[r]*nums[r];
            t*=-1;
            ans+=t*nums[l]*nums[l];
            t*=-1;
            l++;
            r--;
        }
        if(l==r)ans+=t*nums[r]*nums[r];
        return ans;
    }
};