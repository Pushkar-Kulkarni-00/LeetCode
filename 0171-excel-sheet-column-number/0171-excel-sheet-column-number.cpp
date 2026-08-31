class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size()-1;
        int ans=0;
        for(char x:columnTitle){
            ans+=pow(26,n--)*(x-'A'+1);
        }
        return ans;
    }
};