class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector <int> max(n,0);
        vector <int> min(n,0);
        max[0]=nums[0];
        for(int i=1;i<n;i++)max[i]=(max[i-1]>nums[i])?max[i-1]:nums[i];
        min[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)min[i]=(min[i+1]<nums[i])?min[i+1]:nums[i];
        vector <int> t;
        for(int i=0;i<n;i++)t.emplace_back(max[i]-min[i]);
        for(int i=0;i<n;i++){
            if(t[i]<=k)return i;
        }    
        return -1;
    }
};