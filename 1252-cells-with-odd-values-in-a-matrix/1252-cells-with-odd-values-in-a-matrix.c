int oddCells(int m, int n, int** indices, int indicesSize, int* indicesColSize) {
    int ans[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=0;
        }
    }
    for(int i=0;i<indicesSize;i++){
        for(int r=0;r<n;r++)ans[indices[i][0]][r]++;
        for(int r=0;r<m;r++)ans[r][indices[i][1]]++;
    }
    int c=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(ans[i][j]%2==1)c++;
        }
    }
    return c;
}