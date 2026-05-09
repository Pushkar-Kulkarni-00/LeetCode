/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {
    int ** ans=(int **)malloc(sizeof(int *)*n);
    int d=0;
    *returnColumnSizes = (int *)malloc(sizeof(int) * n);
    for(int i=0;i<n;i++){
        ans[i]=(int *)malloc(sizeof(int)*n);
        for(int j=0;j<n;j++){
            ans[i][j]=-1;
        }
        (*returnColumnSizes)[i]=n;
    }
    int j=0;
    int k=0;
    for(int i=1;i<=n*n;i++){
        if(d == 0) {
                ans[j][k]=i;
            if(k + 1 < n && ans[j][k+1]==-1){
                k++;
            }
            else {
                d = 1;
                j++;
            }
        }
        else if(d == 1 ) {
                ans[j][k]=i;
            if(j + 1 < n && ans[j+1][k]==-1){
                j++;
            }
            else {
                d = 2;
                k--;
            }
        }
        else if(d == 2 ) {
                ans[j][k]=i;
            if(k-1>=0 && ans[j][k-1]==-1){
                k--;
            }
            else {
                d = 3;
                j--;
            }
        }
        else if(d == 3 ) {
                ans[j][k]=i;
            if(j-1>=0 && ans[j-1][k]==-1){
                j--;
            }
            else {
                d = 0;
                k++;
            }
        }
    }
    *returnSize=n;
    return ans;
}