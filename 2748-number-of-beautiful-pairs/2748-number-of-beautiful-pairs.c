int gcd(int a,int b){
    int n=a>b?b:a;
    for(int i=n;i>1;i--)if(a%i==0 && b%i==0)return i;
    return 1;
}
int gf(int k){
    while(k>9)k/=10;
    return k;
}
int countBeautifulPairs(int* nums, int numsSize) {
    int f[10]={0};
    int c=0;
    for(int i=0;i<numsSize;i++){
        int l=nums[i]%10;
        for(int d=1;d<10;d++){
            if(f[d]&&gcd(d,l)==1)c+=f[d];
        }
        f[gf(nums[i])]++;
    }
    return c;
}