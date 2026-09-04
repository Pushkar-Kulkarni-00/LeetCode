class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector <pair<vector<int>,int>> t;
        for(auto z:points)t.push_back({z,z[0]*z[0]+z[1]*z[1]});
        sort(t.begin(),t.end(),[](auto a,auto b){
            return a.second<b.second;
        });
        vector<vector<int>> ans;
        for(int i=0;i<k;i++)ans.push_back(t[i].first);
        return ans;
    }
};