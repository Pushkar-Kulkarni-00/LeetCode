class Solution {
public:
    int f(vector <int> s){
        unordered_set <int> k;
        for(int x:s)k.insert(x);
        int n=k.size();
        return n*n;
    }
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            vector <int> s;
            for(int j=i;j<n;j++){
                s.push_back(nums[j]);
                ans+=f(s);
            }
        }
        return ans;
    }
};