class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector <int> ans;
        int s=0;
        for(int x:nums)if(x%2==0)s+=x;
        for(vector <int> x:queries){
            if(nums[x[1]]%2!=0){
                if(x[0]%2!=0)s+=x[0]+nums[x[1]];
            }
            else{
                if(x[0]%2==0)s+=x[0];
                else s-=nums[x[1]];
            }
            nums[x[1]]+=x[0];
            ans.emplace_back(s);
        }
        return ans;
    }
};