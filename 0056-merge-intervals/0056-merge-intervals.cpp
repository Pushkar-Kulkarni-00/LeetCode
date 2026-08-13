class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector <vector <int>> ans;
        for(auto &x:intervals){
            if(ans.empty()|| ans.back()[1]<x[0])ans.emplace_back(x);
            else ans.back()[1]=max(ans.back()[1],x[1]);
        }
        return ans;
    }
};