int sumBase(int n, int k) {
    int c=0;
    int s=0;
    while(n>0){
        s+=(n%k)*pow(10,c++);
        n/=k;
    }
    c=0;
    while(s>0){
        c+=s%10;
        s/=10;
    }
    return c;
}