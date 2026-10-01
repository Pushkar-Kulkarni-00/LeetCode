class Solution {
public:
    bool isValid(string s) {
        stack <char> c;
        for(char t:s){
            if(t==')'){
                if(c.empty())return false;
                if(c.top()=='(')c.pop();
                else return false;
            }
            else if(t=='}'){
                if(c.empty())return false;
                if(c.top()=='{')c.pop();
                else return false;
            }
            else if(t==']'){
                if(c.empty())return false;
                if(c.top()=='[')c.pop();
                else return false;
            }
            else c.push(t);
        }
        return c.empty();
    }
};