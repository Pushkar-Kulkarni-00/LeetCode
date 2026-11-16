class Solution {
public:
    string itoa(int x){
        if(x==0)return "0";
        string ans;
        while(x){
            ans+=(x%10)+'0';
            x/=10;
        }
        int l=0;
        int r=ans.size()-1;
        while(l<r){
            char t=ans[l];
            ans[l]=ans[r];
            ans[r]=t;
            l++;
            r--;
        }
        return ans;
    }
    string digitSum(string s, int k) {
        string ans;
        int n=s.size();
        if(n<=k)return s;
        int l=0;
        while(l<n){
            int t=0;
            for(int i=l;i<l+k && i<n;i++){
                t+=s[i]-'0';
            }
            ans+=itoa(t);
            l+=k;
        }
        return digitSum(ans,k);
    }
};