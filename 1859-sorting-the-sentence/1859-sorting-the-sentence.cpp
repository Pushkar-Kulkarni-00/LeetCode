class Solution {
public:
    string sortSentence(string s) {
        int n=s.size();
        int a=0;
        vector<string> t;
        for(int i=0;i<n;i++){
            if(s[i]>='0'&&s[i]<='9'){
                t.emplace_back(s.substr(a,i-a+1));
                if((i+2)<n)a=i+2;
            }
        }
        sort(t.begin(),t.end(),[](const string &a,const string &b){
            int n=a.size()-1;
            int m=b.size()-1;
            return a[n]<b[m];
        });
        string ans="";
        int ts=t.size();
        for(int i=0;i<ts;i++){
            ans+=t[i].substr(0,t[i].size()-1);
            if(i!=(ts-1))ans+=' ';
        }
        return ans;
    }
};