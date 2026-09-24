class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int t=nums[i];
            int a=0;
            while(t>0){
                a+=t%10;
                t/=10;
            }
            if(a==i)return i;
        }
        return -1;
    }
};