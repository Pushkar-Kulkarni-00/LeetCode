class Solution {
public:
    int chk(vector<int> &nums,int n){
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1])return i-1;
        }
        return -1;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        ans.emplace_back(nums);
        int i;
        while((i=chk(nums,n))!=-1){
            int j;
            for(j=n-1;j>=0;j--){
                if(nums[j]>nums[i])break;
            }
            swap(nums[i],nums[j]);
            int l=i+1;
            int r=n-1;
            while(l<r){
                swap(nums[l],nums[r]);
                l++;
                r--;
            }
            ans.emplace_back(nums);
        }
        return ans;
    }
};