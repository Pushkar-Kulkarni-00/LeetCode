class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int r=numbers.size()-1;
        int l=0;
        while(l<r){
            int s=numbers[l]+numbers[r];
            if(s==target)return {l+1,r+1};
            if(s>target)r--;
            else l++;
        }
        return {-1,-1};
    }
};