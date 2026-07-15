class Solution {
public:

    int gcd (int m,int k){
        if(k==0)return m;
        return gcd(k,m%k);
    }
    int gcdOfOddEvenSums(int n) {
        return gcd(n*(n+1),n*n);
    }
};