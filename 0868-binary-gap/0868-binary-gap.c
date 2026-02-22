int binaryGap(int n) {
    int max=0;
    int i=-1,j=0;
    int c;
    while(n>0){
        if(n%2==1){
            if(i!=-1){
                c=j-i;
                if(c>max)max=c;
            }
            i=j;
        }
        j++;
        n/=2;
    }
    return max;
}