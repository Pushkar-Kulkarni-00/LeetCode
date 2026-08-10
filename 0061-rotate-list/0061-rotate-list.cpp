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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)return NULL;
        if(head->next==NULL)return head;
        int n=0;
        ListNode *t=head;
        while(t!=NULL){n++;t=t->next;}
        k=k%n;
        if(k==0)return head;
        int i=0;
        ListNode *c=head;
        ListNode *p=NULL;
        for(;i<n-k;i++){
            p=c;
            c=c->next;
        }
        p->next=NULL;
        t=c;
        while(t->next!=NULL)t=t->next;
        t->next=head;
        return c;
    }
};