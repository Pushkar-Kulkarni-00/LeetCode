class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int k=n*50 +2;
        vector <int> f(k,0);
        for(int x:nums)f[x]++;
        int s=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==(nums[i-1]+1)){
                s+=nums[i];
            }
            else break;
        }
        while (true){
            if(f[s]==0)return s;
            else s++;
        }
        return -1;
    }
};