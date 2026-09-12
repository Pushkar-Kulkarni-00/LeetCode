class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>=s.size())return s;
        vector <string> ans(numRows);
        int i=0;
        bool down=true;
        for(char x:s){
            ans[i]+=x;
            if(i==0)down=true;
            else if(i==numRows-1)down=false;
            if(down)i++;
            else i--;
        }
        string t="";
        for(string x:ans)t+=x;
        return t;
    }
};
