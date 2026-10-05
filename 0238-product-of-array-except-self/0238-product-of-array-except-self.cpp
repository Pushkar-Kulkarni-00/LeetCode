class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zc=0;
        int p=1;
        int n=nums.size();
        for(int x:nums){
            if(x==0){
                zc++;
                if(zc>1){
                    vector <int> b(n,0);
                    return b;
                }
                continue;
            }
            p*=x;
        }
        vector <int> ans;
        if(zc==1){
            for(int x:nums){
                if(x==0)ans.emplace_back(p);
                else ans.emplace_back(0);
            }
        }
        else {
            for(int x:nums){
                ans.emplace_back(p/x);
            }
        }
        return ans;
    }
};