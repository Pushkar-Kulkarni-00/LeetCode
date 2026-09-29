class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        pair <int,int> ans(-1,INT_MAX);
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    int t=nums[i]+nums[j]+nums[k];
                    if((abs(t-target))<ans.second)ans={t,abs(target-t)};
                }
            }
        }
        return ans.first;
    }
};