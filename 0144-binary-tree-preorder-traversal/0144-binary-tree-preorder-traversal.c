/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
struct TreeNode *a[101];
int tp;

void push(struct TreeNode *x){
    a[++tp]=x;
}

struct TreeNode *pop(){
    return a[tp--];
}

bool isempty(){
    return tp==-1;
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int * oup=(int *)malloc(sizeof(int)*101);
    int c=0;
    if(root ==NULL)*returnSize=0;
    tp=-1;
    push(root);
    while (!isempty()){
        struct TreeNode *curr=pop();
        if(curr==NULL)continue;
        oup[c++]=curr->val;
        if(curr->right)push(curr->right);
        if(curr->left)push(curr->left);
    }
    *returnSize=c;
    return oup;
}