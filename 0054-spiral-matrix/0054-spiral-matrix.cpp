class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int total=m*n;
        vector <pair<int,int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
        vector <vector<bool>>vis(m,vector<bool>(n,false));
        int d=0;
        int i=0;
        int j=0;
        vector <int> ans;
        for(int t=0;t<total;t++){
            vis[i][j]=true;
            ans.emplace_back(matrix[i][j]);
            int ni=i+dir[d].first;
            int nj=j+dir[d].second;

            if(ni>=m || nj>=n ||ni<0 ||nj<0 ||vis[ni][nj]){
                d=(d+1)%4;
                i += dir[d].first;
                j += dir[d].second;
            }
            else{
                i=ni;
                j=nj;
            }
        }
        return ans;
    }
};