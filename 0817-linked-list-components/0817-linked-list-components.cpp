/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        vector <int> f(10001,0);
        for(int &x:nums)f[x]++;
        ListNode *t=head;
        int n=0;
        while(t!=NULL){n++;t=t->next;}
        vector <bool> g(n,false);
        t=head;
        n=0;
        while(t!=NULL){
            if(f[t->val])g[n]=true;
            n++;
            t=t->next;
        }
        bool chk=false;
        int ans=0;
        for(int i=0;i<n;i++){
            if(g[i]){
                if(chk==false)chk=true;
                else continue;
            }
            else{
                if(chk==true){
                    chk=false;
                    ans++;
                }
                else continue;
            }
        }
        if(chk)ans++;
        return ans;
    }
};