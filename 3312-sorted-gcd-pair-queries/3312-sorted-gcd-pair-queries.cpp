#include <numeric>
class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int max=*max_element(nums.begin(),nums.end());
        vector <int> freq(max+1,0);
        vector <long long> cnt(max+1,0);
        for(int x:nums)freq[x]++;
        for(int g=1;g<=max;g++){
            for(int j=g;j<=max;j+=g){
                cnt[g]+=freq[j];
            }
        }
        vector <long long> exactg(max+1,0);
        for(int g=max;g>=1;g--){
            exactg[g] = cnt[g] * (cnt[g] - 1) / 2;
            for(int j=g+g;j<=max;j+=g){
                exactg[g]-=exactg[j];
            }
        }
        vector <long long> prefix(max+1,0);
        for(int g=1;g<=max;g++)prefix[g]=prefix[g-1]+exactg[g];

        vector <int> ans;
        for(auto q:queries){
            int g=lower_bound(prefix.begin(),prefix.end(),q+1)-prefix.begin();
            ans.push_back(g);
        }
        return ans;
    }
};