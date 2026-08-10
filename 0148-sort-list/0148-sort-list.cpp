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
    ListNode* sortList(ListNode* head) {
        if(head==NULL)return NULL;
        ListNode *t=head;
        int n=0;
        while(t!=NULL){n++;t=t->next;}
        t=head;
        vector <ListNode *> a(n,NULL);
        n=0;
        while(t!=NULL){a[n++]=t;t=t->next;}
        sort(a.begin(),a.end(),[](ListNode *a,ListNode *b){
            return (a->val)<(b->val);});
        for(int i=1;i<n;i++){
            a[i-1]->next=a[i];
        }
        a[n-1]->next=NULL;
        return a[0];
    }
};