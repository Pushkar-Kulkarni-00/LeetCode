class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        int max=INT_MIN;
        int min=INT_MAX;
        for(int x:nums){
            if(x>max)max=x;
            if(x<min)min=x;
        }
        vector <int> f(max+1-min,0);
        for(int x:nums)f[x-min]++;
        vector <int> ans;
        for(int i=0;i<max+1-min;i++){
            if(!f[i])ans.emplace_back(i+min);
        }
        return ans;
    }
};