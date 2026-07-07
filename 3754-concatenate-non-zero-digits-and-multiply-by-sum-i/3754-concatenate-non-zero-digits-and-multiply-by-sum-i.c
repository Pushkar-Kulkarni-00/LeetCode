long long sumAndMultiply(int n) {
    long x=0;
    long s=0;
    long c=0;
    while(n>0){
        if(n%10){
            x+=(n%10)*(int)pow(10,c++);
            s+=n%10;
        }
        n/=10;
    }
    return x*s;
}