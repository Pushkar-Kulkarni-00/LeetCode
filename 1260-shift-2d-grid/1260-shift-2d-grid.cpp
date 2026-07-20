class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        int total=m*n;
        k%=total;
        vector<vector<int>> ans(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int idx=i*n+j;
                int newind=(idx+k)%total;
                ans[newind/n][newind%n]=grid[idx/n][idx%n];
            }
        }
        return ans;
    }
};