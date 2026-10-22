class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_set <int> d;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                d.insert(i);
                d.insert(n/i);
            }
        }
        int ans=0;
        for(int k:d){
            bool chk=true;
            int prevMax=0;
            for(int i=0;i+k<=n;i+=k){
                int c=0;
                int j;
                int mn=nums[i];
                int mx=nums[i];
                for(j=i+1;j<i+k;j++){
                    if(nums[j]<nums[j-1])c++;
                    mn=min(mn,nums[j]);
                    mx=max(mx,nums[j]);
                }
                if(nums[i]<nums[i+k-1])c++;
                if(c>=2 || (i>0 && prevMax>mn)){
                    chk=false;
                    break;
                }
                prevMax=mx;
            }
            if(chk)ans+=k;
        }
        return ans;
    }
};