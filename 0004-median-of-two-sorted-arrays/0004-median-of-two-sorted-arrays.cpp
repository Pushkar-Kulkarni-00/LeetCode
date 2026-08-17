class Solution {
public:
    vector <int> merge(vector <int>&a, vector <int> &b){
        vector<int> ans;
        int i=0;
        int j=0;
        int n=a.size();
        int m=b.size();
        while(i<n && j<m){
            if(a[i]<b[j]){
                ans.emplace_back(a[i]);
                i++;
            }
            else{
                ans.emplace_back(b[j]);
                j++;
            }
        }
        if(i==n){
            while(j<m)ans.emplace_back(b[j++]);
        }
        else{
            while(i<n)ans.emplace_back(a[i++]);
        }
        return ans;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> a=merge(nums1,nums2);
        int k=nums1.size()+nums2.size();
        double ans;
        if(k&1){
            ans=(double)a[k/2];
        }
        else{
            ans=((double)(a[k/2]+a[k/2-1]))/2;
        }
        return ans;
    }
};