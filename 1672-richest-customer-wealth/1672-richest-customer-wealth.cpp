class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        for(vector <int> o:accounts){
            int lmax=0;
            for(int x:o)lmax+=x;
            if(lmax>max)max=lmax;
        }
        return max;
    }
};