class Solution {
public:
    int largestInteger(int n, int s) {
        if((n*9)<s)return -1;
        int ans=0;
        while(s){
            if(s/10==0){
                ans=ans*10+s;
                s=0;
                n--;
            }
            else{
                ans=ans*10+9;
                s-=9;
                n--;
            }
        }
        while(n--)ans*=10;
        return ans;
    }
};