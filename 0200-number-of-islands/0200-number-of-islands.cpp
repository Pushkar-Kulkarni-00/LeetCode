class Solution {
public:
    void c(int x,int y,int s,int t,vector<vector<char>>& g){
        g[x][y]=0;
        if(x+1<s)if(g[x+1][y]=='1')c(x+1,y,s,t,g);
        if(y+1<t)if(g[x][y+1]=='1')c(x,y+1,s,t,g);
        if(x-1>=0)if(g[x-1][y]=='1')c(x-1,y,s,t,g);
        if(y-1>=0)if(g[x][y-1]=='1')c(x,y-1,s,t,g);
        return;      
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    ans++;
                    c(i,j,m,n,grid);
                }
            }
        }
        return ans;
    }
};