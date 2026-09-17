class Solution {
public:
    vector <int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>f;
        int n=0;
        for(int x:nums){
            if(!f.count(x)){
                f[x]=1;
            }
            else f[x]++;
            n++;
        }
        vector <int> ans;
        for(pair<int,int> x:f)if(x.second>(n/3)) ans.emplace_back(x.first);
        return ans;
    }
};