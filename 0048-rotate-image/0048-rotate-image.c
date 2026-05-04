void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int str[matrixSize*matrixSize];
    int t=0;
    for(int j=0;j<matrixSize;j++){
        for(int i=matrixSize-1;i>=0;i--){
            str[t++]=matrix[i][j];
        }
    }
    t=0;
    for(int i=0;i<matrixSize;i++){
        for(int j=0;j<matrixSize;j++){
            matrix[i][j]=str[t++];
        }
    }
}