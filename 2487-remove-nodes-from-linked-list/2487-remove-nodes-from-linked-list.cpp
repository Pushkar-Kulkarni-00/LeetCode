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
        ListNode *p=NULL;
        ListNode *c=h;
        while(c!=NULL){
            ListNode *next=c->next;
            c->next=p;

            p=c;
            c=next;
        }
        return p;
    }

    ListNode* removeNodes(ListNode* head) {
        ListNode *h=reversell(head);
        ListNode *m=h;
        ListNode *c=h;

        while(c!=NULL){
            if(c->val<m->val){
                m->next=c->next;
            }
            else{
                m=c;
            }
            c=c->next;
        }
        return reversell(h);
    }
};