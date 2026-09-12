class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)return s;
        vector <vector<char>> ans(numRows,vector<char>());
        int i=0;
        bool down=true;
        for(char x:s){
            if(i==-1){
                i=1;
                down=true;
            }
            else if(i==numRows){
                i-=2;
                down=false;
            }
            ans[i].emplace_back(x);
            if(down)i++;
            else i--;
        }
        string t="";
        for(auto x:ans){
            for(auto y:x){
                t+=y;
            }
        }
        return t;
    }
};
