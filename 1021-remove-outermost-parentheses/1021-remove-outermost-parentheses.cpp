class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        int t=0;
        string ans;
        for(int i=0;i<n;i++){
            if(s[i]=='(' && t++ )ans.push_back(s[i]);
            else if(s[i]==')' && --t)ans.push_back(s[i]);
        }
        return ans;
    }
};