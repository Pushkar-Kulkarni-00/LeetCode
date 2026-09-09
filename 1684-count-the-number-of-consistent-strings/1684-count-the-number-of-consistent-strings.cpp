class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
        vector <bool> f(26,0);
        for(char x:allowed)f[x-'a']=true;
        for(string x:words){
            for(char y:x)if(f[y-'a']==false){ans--;break;}
            ans++;
        }
        return ans;
    }
};