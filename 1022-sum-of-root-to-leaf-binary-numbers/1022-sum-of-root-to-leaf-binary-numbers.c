/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int dfs(struct TreeNode *root,int val){
    if(root==NULL)return 0;
    if(root->left==NULL && root->right==NULL)return val*2+root->val;
    return dfs(root->left,val*2+root->val) + dfs(root->right,val*2+root->val);
}

int sumRootToLeaf(struct TreeNode* root) {
    return dfs(root,0);
}