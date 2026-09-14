class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        vector <char> x;
        int n=chars.size();
        if(n==1)return 1;
        for(int j=1;j<n;j++){
            if(chars[j]!=chars[j-1]){
                int t=j-i;
                x.emplace_back(chars[j-1]);
                if(t!=1){
                    string l=to_string(t);
                    for(char m:l)x.emplace_back(m);
                }
                i=j;
            }
        }
        int t=n-i;
        x.emplace_back(chars[n-1]);
        if(t!=1){
            string l=to_string(t);
            for(char m:l)x.emplace_back(m);
        }
        chars=x;
        return chars.size();
    }
};