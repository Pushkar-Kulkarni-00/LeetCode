int** updateMatrix(int** mat, int matSize, int* matColSize, int* returnSize, int** returnColumnSizes) {
    int **ans = malloc(sizeof(int*) * matSize);
    *returnSize = matSize;

    *returnColumnSizes = malloc(sizeof(int) * matSize);

    for(int i = 0; i < matSize; i++) {
        ans[i] = malloc(sizeof(int) * matColSize[i]);
        (*returnColumnSizes)[i] = matColSize[i];

        for(int j = 0; j < matColSize[i]; j++) {
            if(mat[i][j] == 0) ans[i][j] = 0;
            else ans[i][j] = 100000;
        }
    }

    // First pass
    for(int i = 0; i < matSize; i++) {
        for(int j = 0; j < matColSize[i]; j++) {
            if(i > 0)
                if(ans[i][j] > ans[i-1][j] + 1)
                    ans[i][j] = ans[i-1][j] + 1;

            if(j > 0)
                if(ans[i][j] > ans[i][j-1] + 1)
                    ans[i][j] = ans[i][j-1] + 1;
        }
    }

    // Second pass
    for(int i = matSize - 1; i >= 0; i--) {
        for(int j = matColSize[i] - 1; j >= 0; j--) {
            if(i < matSize - 1)
                if(ans[i][j] > ans[i+1][j] + 1)
                    ans[i][j] = ans[i+1][j] + 1;

            if(j < matColSize[i] - 1)
                if(ans[i][j] > ans[i][j+1] + 1)
                    ans[i][j] = ans[i][j+1] + 1;
        }
    }

    return ans;
}