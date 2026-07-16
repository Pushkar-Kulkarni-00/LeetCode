class Solution {
public:
    long long gcd(long long m,long long k){
        if(k==0)return m;
        return gcd(k,m%k);
    }

    long long gcdSum(vector<int>& nums) {
        vector<long long> prefixGcd;
        vector <long long> mx;
        long long max=-1;
        for(long long i:nums){
            if(i>max)max=i;
            mx.emplace_back(max);
        }
        for(long long i=0;i<nums.size();i++){
            prefixGcd.emplace_back(gcd(nums[i],mx[i]));
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        long long ans=0;
        long long r=prefixGcd.size()-1;
        long long l=0;
        while(r>l){
            ans+=gcd(prefixGcd[r],prefixGcd[l]);
            r--;
            l++;
        }
        return ans;
    }
};