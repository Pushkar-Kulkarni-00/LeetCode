class Solution {
public:
    int bins(vector <int>& k,int t){
        int l=0;
        int r=k.size()-1;
        while(l<=r){
            int m=(l+r)/2;
            if(k[m]==t)return m;
            else if(k[m]<t)l=m+1;
            else r=m-1;
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        for(int i=0;i<n;i++){
            int nt=target-numbers[i];
            int ni=bins(numbers,nt);
            if(ni==-1)continue;
            if(i==ni)continue;
            return {(i<ni)?i+1:ni+1,(i>ni)?i+1:ni+1};
        }
        return {-1,-1};
    }
};