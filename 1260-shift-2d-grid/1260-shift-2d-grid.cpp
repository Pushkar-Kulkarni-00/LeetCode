class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<k;i++){
            int t=grid[m-1][n-1];
            for(int j=0;j<m;j++){
                grid[j].insert(grid[j].begin(),t);
                t=grid[j].back();
                grid[j].pop_back();
            }
        }
        return grid;
    }
};