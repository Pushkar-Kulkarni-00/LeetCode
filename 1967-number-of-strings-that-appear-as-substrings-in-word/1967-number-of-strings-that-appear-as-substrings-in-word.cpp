class Solution {
public:

    vector<int> complps(const string &pt){

        int m=pt.size();
        vector<int> lps(m,0);
        int len=0;
        int i=1;
        while(i<m){
            if(pt[i]==pt[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else{
                if(len!=0)len=lps[len-1];
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }
        return lps;
    }

    bool find(const string &txt,const string &pt){
        vector<int> lps=complps(pt);
        
        int n=txt.size();
        int m=pt.size();

        int i=0;
        int j=0;

        while(i<n){
            if(txt[i]==pt[j]){
                i++;
                j++;
            }
            if(j==m){
                return true;
            }
            else if(i<n && txt[i]!=pt[j]){
                if(j!=0)j=lps[j-1];
                else i++;
            }
        }
        return false;
    }
    int numOfStrings(vector<string>& patterns, string word) {
        int ans=0;
        for(const string &x:patterns)ans+=find(word,x);
        return ans;
    }
};