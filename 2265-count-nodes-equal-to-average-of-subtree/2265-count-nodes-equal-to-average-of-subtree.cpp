/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 * };
 */
class Solution {
public:
    int ans=0;
    pair<int,int> getavg(TreeNode *r){
        if(r==nullptr)return {0,0};
        pair <int,int>l=getavg(r->left);
        pair <int,int>ri=getavg(r->right);
        int sum=r->val+l.first+ri.first;
        int count=1+l.second+ri.second;
        if((sum/count)==r->val)ans++;
        return {sum,count};
    }

    int averageOfSubtree(TreeNode* root) {
        getavg(root);
        return ans;
    }
};