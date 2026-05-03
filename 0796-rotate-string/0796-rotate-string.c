bool rotateString(char* s, char* goal) {
    int x=strlen(s);
    int y=strlen(goal);
    if(x!=y)return false;
    for(int i=0;i<x;i++){
        int t=0;
        for(int j=i;t<x;j=(j+1)%x){
            if(s[j]!=goal[t])break;
            t++;
        }
        if(t==x)return true;
    }
    return false;
}