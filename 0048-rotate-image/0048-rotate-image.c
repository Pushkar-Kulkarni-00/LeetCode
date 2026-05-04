void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    //transpose
    for(int i=0;i<matrixSize;i++){
        for(int j=i;j<matrixSize;j++){
            matrix[i][j]=matrix[j][i]+matrix[i][j]-(matrix[j][i]=matrix[i][j]);
        }
    }
    //reverse each row
    for(int i=0;i<matrixSize;i++){
        int l=0;
        int r=matrixSize-1;
        while(l<r){
            matrix[i][l]=matrix[i][l]+matrix[i][r]-(matrix[i][r]=matrix[i][l]);
            l++;
            r--;
        }
    }
}