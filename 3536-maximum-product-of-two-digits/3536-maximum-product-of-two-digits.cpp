class Solution {
public:
    int maxProduct(int n) {
        int max1=0,max2=0;
        while(n>0){
            int m=n%10;
            if(m>max1){
                max2=max1;
                max1=m;
            }
            else{
                if(m>max2){
                    max2=m;
                }
            }
            n/=10;
        }
        return max1*max2;
    }
};