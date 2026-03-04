int numSpecial(int** mat, int matSize, int* matColSize) {
    int row[matSize];
    int col[matColSize[0]];
    for(int i=0;i<matSize;i++)row[i]=0;
    for(int i=0;i<matColSize[0];i++)col[i]=0;

    for(int i=0;i<matSize;i++){
        for(int j=0;j<matColSize[i];j++){
            if(mat[i][j]==1){
                row[i]++;
                col[j]++;
            }
        }
    }
    int ans=0;
    for(int i=0;i<matSize;i++){
        for(int j=0;j<matColSize[i];j++){
            if(mat[i][j]==1 &&row[i]==1 && col[j]==1){
                ans++;
            }
        }
    }
    return ans;
}