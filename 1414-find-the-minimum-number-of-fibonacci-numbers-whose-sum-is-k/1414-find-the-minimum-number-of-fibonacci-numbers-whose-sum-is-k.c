int findMinFibonacciNumbers(int k) {
    if(k==0 || k==1)return 1;
    int fib[100]={0};
    fib[0]=0;
    fib[1]=1;
    int l=2;
    for(;fib[l-1]<=k;l++){
        if(fib[l-1]==k)return 1;
        fib[l]=fib[l-1]+fib[l-2];
    }
    l-=2;

    int count=0;
    for(int i=l;i>=0;i--){
        while(k>=fib[i]){
            k-=fib[i];
            count++;
        }
        if(k==0)return count;
    }
    return -1;
}