class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();
        int l=0;
        int r=0;
        int lsum=0;
        int rsum=0;
        for(int i=0;i<n;i++){
            if(num[i]=='?'){
                if(i<n/2)l++;
                else r++;
            }
            else{
                if(i<n/2)lsum+=num[i]-'0';
                else rsum+=num[i]-'0';
            }
        }
        if((l+r)&1)return true;
        if(2*(lsum-rsum)==9*(r-l))return false;
        return true;
    }
};