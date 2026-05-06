/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
char** rotateTheBox(char** boxGrid, int boxGridSize, int* boxGridColSize, int* returnSize, int** returnColumnSizes) {
    int x=boxGridSize;
    int y=boxGridColSize[0];
    *returnSize=y;
    *returnColumnSizes = malloc(y * sizeof(int));
    for(int i = 0; i < y; i++) {
        (*returnColumnSizes)[i] = x;
    }
    char **ans=(char **)malloc(sizeof(char *)*y);
    for(int i=0;i<y;i++){
        ans[i]=(char *)malloc(sizeof(char)*x);
    }
    for(int i=0;i<x;i++){
        int k=0;
        for(int j=y-1;j>=0;j--){
            if(boxGrid[i][j]=='.')k++;
            else if(boxGrid[i][j]=='*')k=0;
            else{
                boxGrid[i][j]='.';
                boxGrid[i][j+k]='#';
            }
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            ans[j][x-1-i]=boxGrid[i][j];
        }
    }
    return ans;
}