class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector <int> sorted=arr;
        sort(sorted.begin(),sorted.end());

        int r=1;

        unordered_map<int,int> rank;
        for(auto x :sorted){
            if(rank.find(x)==rank.end()){
                rank[x]=r++;
            }
        }

        for(int &x:arr){
            x=rank[x];
        }

        return arr;

    }
};