long mySqrt(int x) {
    long i;
    if(x<=0)return 0;
    for(i=1;i<=x/2;i++){
        if(i*i<=x && (i+1)*(i+1)>x)break;
    }
    return i;
}