/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* createBinaryTree(int** descriptions, int descriptionsSize, int* descriptionsColSize) {

    struct TreeNode **loc = (struct TreeNode **)malloc(sizeof(struct TreeNode*) * 100001);

    for(int i = 0; i < 100001; i++)
        loc[i] = NULL;

    int *locs = (int *)calloc(100001, sizeof(int));

    for(int i = 0; i < descriptionsSize; i++) {

        int parent = descriptions[i][0];
        int child = descriptions[i][1];
        int isLeft = descriptions[i][2];

        if(loc[parent] == NULL) {
            loc[parent] = (struct TreeNode *)malloc(sizeof(struct TreeNode));
            loc[parent]->val = parent;
            loc[parent]->left = NULL;
            loc[parent]->right = NULL;
        }

        if(loc[child] == NULL) {
            loc[child] = (struct TreeNode *)malloc(sizeof(struct TreeNode));
            loc[child]->val = child;
            loc[child]->left = NULL;
            loc[child]->right = NULL;
        }

        if(isLeft)
            loc[parent]->left = loc[child];
        else
            loc[parent]->right = loc[child];

        locs[child] = 1;
    }

    for(int i = 0; i < 100001; i++) {
        if(loc[i] != NULL && locs[i] == 0)
            return loc[i];
    }

    return NULL;
}