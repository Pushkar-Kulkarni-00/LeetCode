class Solution {
public:
    int maxDistinct(string s) {
        vector <bool> f(26,0);
        int ans=0;
        for(char x:s)f[x-'a']=true;
        for(int x:f)if(x)ans++;
        return ans;
    }
};