class Solution {
public:
    vector<string> cellsInRange(string s) {
        char begr=s[0];
        char endr=s[3];

        char begc=s[1];
        char endc=s[4];

        vector <string> ans;

        for(char i=begr;i<=endr;i++){
            for(char j=begc;j<=endc;j++){
                string n={i,j};
                ans.emplace_back(n);
            }
        }
        return ans;
    }
};