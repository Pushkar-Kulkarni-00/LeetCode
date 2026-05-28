int numRookCaptures(char** board, int boardSize, int* boardColSize) {
    int c=0;
    int ni;
    int nj;
    for(int i=0;i<boardSize;i++){
        for(int j=0;j<boardColSize[i];j++){
            if(board[i][j]=='R'){
                ni=i;
                nj=j;
            }
        }
    }
    for(int x=ni-1;x>=0;x--){if(board[x][nj]=='p'){c++;break;}else if(board[x][nj]=='B')break;}
    for(int x=ni+1;x<boardSize;x++){if(board[x][nj]=='p'){c++;break;}else if(board[x][nj]=='B')break;}
    for(int y=nj-1;y>=0;y--){if(board[ni][y]=='p'){c++;break;}else if(board[ni][y]=='B')break;}
    for(int y=nj+1;y<boardSize;y++){if(board[ni][y]=='p'){c++;break;}else if(board[ni][y]=='B')break;}
    return c;
}