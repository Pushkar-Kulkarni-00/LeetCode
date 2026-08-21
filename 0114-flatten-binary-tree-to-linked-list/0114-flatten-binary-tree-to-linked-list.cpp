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
    void flatten(TreeNode* root) {
        if(root==NULL)return;
        else if(root->left==NULL && root->right)flatten(root->right);
        else if(root->right==NULL && root->left){
            root->right=root->left;
            root->left=NULL;
            flatten(root->right);
        }
        else{
            flatten(root->left);
            flatten(root->right);

            TreeNode *temp=root->left;
            if(temp==NULL)return;
            while(temp->right!=NULL)temp=temp->right;


            TreeNode *rightbr=root->right;
            root->right=root->left;
            temp->right=rightbr;

            root->left=NULL;

        }
    }
};