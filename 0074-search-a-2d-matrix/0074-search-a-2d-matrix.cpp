class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int t=m*n;
        int l=0;
        int r=t-1;
        while(l<=r){
            int z=(l+r)/2;
            if(matrix[z/n][z%n]==target)return true;
            else if(matrix[z/n][z%n]>target)r=z-1;
            else l=z+1;
        }
        return false;
    }
};