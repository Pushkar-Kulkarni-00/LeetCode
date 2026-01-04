int countEven(int num) {
    int k=0;
    for(int i=2;i<=num;i++){
        int r=0;
        int t=i;
        while(t>0){
            r+=t%10;
            t/=10;
        }
        if(r%2==0)k++;
    }
    return k;
}