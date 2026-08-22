class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int ans=1;
        int n=nums.size();
        vector <bool> vis(n,false);
        for(int i=0;i<n;i++){
            if(vis[i])continue;
            vis[i]=true;
            int t=1;
            int s=nums[i];
            while(i!=s){vis[s]=true;s=nums[s];t++;}
            if(t>ans)ans=t;
        }
        return ans;
    }
};