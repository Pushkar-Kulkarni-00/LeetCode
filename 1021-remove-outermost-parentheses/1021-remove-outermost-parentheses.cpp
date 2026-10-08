class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        vector <int> k(n,-1);
        int t=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                k[i]=t++;
            }
            if(s[i]==')'){
                k[i]=--t;
            }
        }
        string ans;
        for(int i=0;i<n;i++){
            if(k[i]>0){
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};