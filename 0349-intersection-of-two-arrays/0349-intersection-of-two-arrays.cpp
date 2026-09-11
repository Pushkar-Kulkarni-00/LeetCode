class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        auto s1=max_element(nums1.begin(),nums1.end());
        auto s2=max_element(nums2.begin(),nums2.end());

        vector <bool> f1(*s1+1,0);
        vector <bool> f2(*s2+1,0);

        for(int x:nums1)f1[x]=true;
        for(int x:nums2)f2[x]=true;

        vector <int> ans;
        int i=0;
        int l=min(*s1,*s2);
        while(i<=l){
            if(f1[i]&&f2[i])ans.emplace_back(i);
            i++;
        }
        return ans;
    }
};