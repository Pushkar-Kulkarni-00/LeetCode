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
    unordered_map <int,int> k;
    void check(TreeNode *r){
        if(r==NULL)return;
        if(k.count(r->val))k[r->val]++;
        else k[r->val]=1;
        check(r->left);
        check(r->right);
    }
    vector<int> findMode(TreeNode* root) {
        k.clear();
        check(root);
        int max=0;
        vector <int> ans;
        for(pair <int,int> x:k){
            if(x.second>max)max=x.second;
        }
        for(pair<int,int>x:k){
            if(x.second==max)ans.push_back(x.first);
        }
        return ans;
    }
};