#include <numeric>
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max=-1;
        int min=10000000000;
        for(int x:nums){
            if(x>max)max=x;
            if(x<min)min=x;
        }
        return gcd(max,min);
    }
};