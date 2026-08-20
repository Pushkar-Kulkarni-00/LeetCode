class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector <int> arr1;
        vector <int> arr2;

        int n=nums.size();
        int i=0;
        arr1.push_back(nums[i++]);
        arr2.push_back(nums[i++]);
        for(;i<n;i++){
            if(arr1.back()>arr2.back())arr1.push_back(nums[i]);
            else arr2.push_back(nums[i]);
        }

        for(int x:arr2)arr1.push_back(x);
        return arr1;

    }
};