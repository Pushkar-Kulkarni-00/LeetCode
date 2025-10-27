int numberOfBeams(char** bank, int bankSize) {
    int s=0;
    int p=0;
    for(int i=0;i<bankSize;i++){
        int c=0;
        int n=strlen(bank[i]);
        for(int j=0;j<n;j++){
            if(bank[i][j]=='1')c++;
        }
        if(c){
            s+=c*p;
            p=c;
        }
    }
    return s;
}