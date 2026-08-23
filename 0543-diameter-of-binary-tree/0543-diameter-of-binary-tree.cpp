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
    int d=0;
    int fn(TreeNode *r){
        if(r!=NULL){
            int lh=fn(r->left);
            int rh=fn(r->right);

            if((lh+rh)>d)d=lh+rh;
            return max(lh,rh)+1;
        }
        return 0;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        d=0;
        fn(root);
        return d;
    }
};