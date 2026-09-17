class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>f;
        int n=0;
        for(int x:nums){
            if(f.find(x)==f.end()){
                f[x]=1;
            }
            else f[x]++;
            n++;
        }
        for(pair<int,int> x:f)if(x.second>(n/2))return x.first;
        return -1;
    }
};