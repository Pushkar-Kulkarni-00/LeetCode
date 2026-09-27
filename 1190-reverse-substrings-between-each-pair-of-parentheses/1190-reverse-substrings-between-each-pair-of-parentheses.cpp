class Solution {
public:
    string reverseParentheses(string s) {
        vector<string> st;
        string t="";
        for(char c:s){
            if(c=='('){
                st.push_back(t);
                t="";
            }
            else if(c==')'){
                reverse(t.begin(),t.end());
                t=st.back()+t;
                st.pop_back();
            }
            else t+=c;
        }
        return t;
    }
};