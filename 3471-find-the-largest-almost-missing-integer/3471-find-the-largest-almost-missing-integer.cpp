class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector <int> f(51,0);
        int n=nums.size();
        for(int i=0;i<=n-k;i++){
            set <int> m;
            for(int j=i;j<i+k;j++){
                m.insert(nums[j]);
            }
            for(auto x:m)f[x]++;
        }
        int ans=-1;
        for(int i=50;i>=0;i--){
            if(f[i]==1)if(i>ans)ans=i;
        }
        return ans;
    }
};