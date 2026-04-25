long long smallestNumber(long long num) {
    long long x[10]={0};
    long long a=num;
    long long chk=1;
    if(a<0){
        a*=-1;
        while(a>0){
            x[a%10]++;
            a/=10;
        }
        long long ans=0;
        for(int i=9;i>=0;i--){
            if(x[i]==0)continue;
            for(int j=0;j<x[i];j++)ans=ans*10+i;
            x[i]=0;
        }
        return ans*-1;
    }
    while(a>0){
        x[a%10]++;
        a/=10;
    }
    long long ans=0;
    for(int i=1;i<10;i++){
        if(x[i]==0)continue;
        for(int j=0;j<x[i];j++){
            ans=ans*10+i;
            if(x[0]){
                for(int k=0;k<x[0];k++)ans*=10;
                x[0]=0;
            }
        }
        x[i]=0;
    }
    return ans;
}