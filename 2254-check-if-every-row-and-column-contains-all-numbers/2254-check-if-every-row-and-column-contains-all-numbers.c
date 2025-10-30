bool checkValid(int** matrix, int matrixSize, int* matrixColSize) {
    bool row[matrixSize][matrixSize];
    bool col[matrixSize][matrixSize];
    for (int i = 0; i < matrixSize; i++)
    for (int j = 0; j < matrixSize; j++)
        row[i][j] = col[i][j] = false;
    for(int i=0;i<matrixSize;i++){
        for(int j=0;j<matrixSize;j++){
            int num=matrix[i][j]-1;
            if(row[i][num]||col[j][num])return false;
            row[i][num]=col[j][num]=true;
        }
    }
    return true;
}