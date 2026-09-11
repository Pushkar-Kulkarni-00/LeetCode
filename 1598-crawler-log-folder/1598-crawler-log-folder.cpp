class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans=0;
        for(string x:logs){
            if(x[0]=='.'){
                if(x[1]=='.')ans--;
                if(ans<0)ans=0;
            }
            else ans++;
        }
        return ans;
    }
};