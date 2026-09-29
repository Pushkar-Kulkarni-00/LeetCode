class Solution {
public:

    vector <vector<vector <int>>> dp;

    bool chk(vector<vector<char>>& g,int x,int y,int s,int t,int b){
        if(g[x][y]=='(')b++;
        else if(g[x][y]==')' && b>0)b--;
        else return false;

        if(dp[x][y][b]!=-1)return dp[x][y][b];

        if(x==s && y==t){
            return dp[x][y][b]=(b==0);
        }
        else if(x==s){
            return dp[x][y][b]=chk(g,x,y+1,s,t,b);
        }
        else if(y==t){
            return dp[x][y][b]=chk(g,x+1,y,s,t,b);
        }
        return dp[x][y][b]=chk(g,x+1,y,s,t,b) || chk(g,x,y+1,s,t,b);
    }

    bool hasValidPath(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        dp.assign(m,vector<vector<int>>(n,vector<int>(m+n,-1)));
        return chk(grid,0,0,m-1,n-1,0);
    }
};