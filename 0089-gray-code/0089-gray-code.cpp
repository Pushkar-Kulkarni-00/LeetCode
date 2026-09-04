class Solution {
public:
    vector<int> grayCode(int n) {
        vector <int> ans;
        int i=0;
        int t=1<<n;
        while(i<t){
            int gray=i^(i>>1);
            ans.emplace_back(gray);
            i++;
        }
        return ans;
    }
};
