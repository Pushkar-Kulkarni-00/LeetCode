class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map <string,string> k;
        for(vector<string> x:knowledge)k[x[0]]=x[1];
        string ans;
        int n=s.size();
        int c=0;
        bool chk=true;
        for(int i=0;i<n;i++){
            if(s[i]=='('){c=i+1;chk=false;}
            else if(s[i]==')'){
                string word=s.substr(c,i-c);
                if(k.count(word))ans+=k[word];
                else ans+='?';
                chk=true;              
            }
            else{if(chk)ans+=s[i];}
        }
        return ans;
    }
};