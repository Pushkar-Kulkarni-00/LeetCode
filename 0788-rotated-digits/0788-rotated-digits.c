int rotatedDigits(int n) {
    int cnt=0;
    for(int i=1;i<=n;i++){
        int x=i;
        int inv=0;
        int r=0;
        int t=0;
        while(x>0){
            if(x%10==5)r=r+(2)*pow(10,t++);
            else if(x%10==2)r=r+(5)*pow(10,t++);
            else if(x%10==6)r=r+(9)*pow(10,t++);
            else if(x%10==9)r=r+(6)*pow(10,t++);
            else if (x%10==0||x%10==1||x%10==8)r=r+(x%10)*pow(10,t++);
            else {
                inv=1;
                break;
            }
            x/=10;
        }
        if(inv==1)continue;
        if(r!=i)cnt++;
    }
    return cnt;
}