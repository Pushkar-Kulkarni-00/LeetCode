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
    bool chk(TreeNode *r,long low,long high){
        if(r==nullptr)return true;
        if(r->val<=low ||r->val>=high)return false;
        return chk(r->left,low,r->val) &&chk(r->right,r->val,high);
    }
    bool isValidBST(TreeNode* root) {
        return chk(root,LONG_MIN,LONG_MAX);
    }
};