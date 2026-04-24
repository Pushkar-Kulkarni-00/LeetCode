int furthestDistanceFromOrigin(char* moves) {
    int a[3]={0};
    for(int i=0;moves[i]!='\0';i++){
        if(moves[i]=='L')a[0]++;
        else if(moves[i]=='R')a[1]++;
        else a[2]++;
    }
    if(a[0]>a[1])return a[0]+a[2]-a[1];
    else if(a[0]<a[1])return a[1]+a[2]-a[0];
    return a[2];
}