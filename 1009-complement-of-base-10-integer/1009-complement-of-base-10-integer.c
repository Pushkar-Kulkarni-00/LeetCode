int bitwiseComplement(int n) {
    if(n==0)return 1;
    int cnt=0;
    int ans=0;
    while(n>0){
        int r=n%2;
        r=(r==1)?1:0;
        if(r==0)ans+=pow(2,cnt);
        cnt++;
        n/=2;
    }
    return ans;
}