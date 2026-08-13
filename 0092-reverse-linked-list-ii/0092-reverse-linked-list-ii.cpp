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
    ListNode *reversell(ListNode *h){
        if(h==NULL)return NULL;
        ListNode *c=h;
        ListNode *p=NULL;

        while(c!=NULL){
            ListNode *next=c->next;
            c->next=p;

            p=c;
            c=next;
        }
        return p;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL)return NULL;
        ListNode *t=head;
        ListNode *bn;
        ListNode *ns;
        ListNode *ne;
        ListNode *an;
        int n=0;
        while(t!=NULL){n++;t=t->next;}
        if(left==1 && right == n){
            return reversell(head);
        }
        else if(left==1){
            t=head;
            for(int i=1;i<right;i++)t=t->next;
            ne=t;
            an=t->next;

            ne->next=NULL;
            ListNode *nn=reversell(head);
            t=nn;
            while(t->next!=NULL)t=t->next;
            t->next=an;
            return nn;
        }
        else if(right==n){

            t=head;
            for(int i=1;i<left-1;i++)t=t->next;
            bn=t;
            ns=t->next;

            bn->next=NULL;
            ListNode * nn=reversell(ns);
            bn->next=nn;
            return head;
        }

        t=head;

        for(int i=1;t!=NULL;i++,t=t->next){
            if(i==left-1){
                bn=t;
                ns=t->next;
            }
            if(i==right){
                ne=t;
                an=t->next;
            }
        }

        bn->next=NULL;
        ne->next=NULL;

        ListNode *nn=reversell(ns);
        t=nn;

        bn->next=nn;
        while(t->next!=NULL)t=t->next;
        t->next=an;
        
        return head;
    }
};
