class Solution {
public:
    int maximum69Number (int num) {
        vector <int> a;
        int t=num;
        while(t){
            a.emplace_back(t%10);\
            t/=10;
        }
        int l=0;
        int r=log10(num);
        while(l<r){
            int s=a[l];
            a[l]=a[r];
            a[r]=s;
            l++;
            r--;
        }
        for(int &x:a)if(x==6){x=9;break;}
        int ans=0;
        for(int x:a)ans=ans*10+x;
        return ans;

    }
};