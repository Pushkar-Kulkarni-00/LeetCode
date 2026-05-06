/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    *returnSize=matrixSize*matrixColSize[0];
    int *ans=(int *)malloc(sizeof(int)*(*returnSize));
    int t=0;
    int d=0;
    int i=0;
    int j=0;
    while(t!=(*returnSize)){
        ans[t++]=matrix[i][j];
        matrix[i][j]=-111;
        if(d == 0) { // right

            if(j + 1 < matrixColSize[0] && matrix[i][j + 1] != -111)
                j++;
            else {
                d = 1;
                i++;
            }

        }
        else if(d == 1) { // down

            if(i + 1 < matrixSize && matrix[i + 1][j] != -111)
                i++;
            else {
                d = 2;
                j--;
            }

        }
        else if(d == 2) { // left

            if(j - 1 >= 0 && matrix[i][j - 1] != -111)
                j--;
            else {
                d = 3;
                i--;
            }

        }
        else if(d == 3) { // up

            if(i - 1 >= 0 && matrix[i - 1][j] != -111)
                i--;
            else {
                d = 0;
                j++;
            }
        }
    }
    return ans;
}
