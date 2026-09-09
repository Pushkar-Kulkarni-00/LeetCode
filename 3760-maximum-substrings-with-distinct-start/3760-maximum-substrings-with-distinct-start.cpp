class Solution {
public:
    int maxDistinct(string s) {
        vector <int> f(26,0);
        int ans=0;
        for(char x:s)f[x-'a']++;
        for(int x:f)if(x)ans++;
        return ans;
    }
};