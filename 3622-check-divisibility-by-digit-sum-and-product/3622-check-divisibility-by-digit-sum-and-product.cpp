class Solution {
public:
    bool checkDivisibility(int n) {
        long long p=1;
        long long s=0;
        int t=n;
        while(t>0){
            int k=t%10;
            p*=k;
            s+=k;
            t/=10;
        }
        return !(n%(p+s));
    }
};