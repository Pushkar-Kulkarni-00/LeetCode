class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>k1;
        for(int x:nums1){
            if(k1.count(x))k1[x]++;
            else k1[x]=1;
        }
        unordered_map<int,int>k2;
        for(int x:nums2){
            if(k2.count(x))k2[x]++;
            else k2[x]=1;
        }
        vector <int> ans;
        for(pair<int,int> x:k1){
            if(k2.count(x.first)){
                int t=min(x.second,k2[x.first]);
                while(t--)ans.emplace_back(x.first);
            }
        }
        return ans;
    }
};