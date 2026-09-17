/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return nullptr;
        int maxi=0;
        for(int i=1;i<n;i++)if(nums[maxi]<nums[i])maxi=i;
        vector <int> left(nums.begin(),nums.begin()+maxi);
        vector <int> right(nums.begin()+maxi+1,nums.end());
        TreeNode *root=new TreeNode(
            nums[maxi],
            constructMaximumBinaryTree(left),
            constructMaximumBinaryTree(right)
        );
        return root;
    }
};