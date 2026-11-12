class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        bool c=true;
        int maxi=0;
        int cnt=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                if(c)cnt++;
                else{
                    maxi=max(maxi,cnt);
                    cnt=2;
                    c=true;
                }
            }
            else if(nums[i]<nums[i-1]){
                if(c==false)cnt++;
                else{
                    maxi=max(maxi,cnt);
                    cnt=2;
                    c=false;
                }
            }
            else{
                maxi=max(maxi,cnt);
                cnt=1;
                c=true;
            }
        }
        return max(maxi,cnt);
    }
};