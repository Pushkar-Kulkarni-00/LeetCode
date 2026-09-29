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
    int c(TreeNode *r,int val){
        if(r==nullptr)return 0;
        val=val*10+r->val;
        if(r->left==nullptr && r->right==nullptr)return val;
        return c(r->left,val)+c(r->right,val);
    }
    int sumNumbers(TreeNode* root) {
        return c(root,0);
    }
};