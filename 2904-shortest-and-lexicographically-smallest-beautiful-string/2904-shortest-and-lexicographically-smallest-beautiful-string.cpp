class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        if(s=="")return "";
        int n=s.size();
        int t=0;
        for(char x:s)if(x-'0')t++;
        if(t<k)return "";

        vector <string> l;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string temp=s.substr(i,j-i+1);
                int m=0;
                for(char x:temp)if(x-'0')m++;
                if(m==k)l.emplace_back(temp);
            }
        }
        sort(l.begin(),l.end(),[](string &a,string &b){
            int z=a.size();
            int y=b.size();
            if(z!=y)return z<y;
            return a<b;
        });
        return l[0];
        
    }
};