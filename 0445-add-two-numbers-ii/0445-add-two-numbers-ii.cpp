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
    ListNode *reverse(ListNode *l){
        ListNode *p=nullptr;
        ListNode *c=l;
        while(c!=nullptr){
            ListNode *t=c->next;
            c->next=p;

            p=c;
            c=t;
        }
        return p;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);

        ListNode *t1=l1;
        ListNode *t2=l2;

        int c=0;

        ListNode *ans=new ListNode(-1);
        ListNode *t3=ans;
        while(t1 && t2){
            int v=t1->val+t2->val+c;
            ListNode *k=new ListNode(v%10);
            c=v/10;
            t3->next=k;

            t1=t1->next;
            t2=t2->next;
            t3=k;
        }
        if(t1){
            while(t1){
                int v=c+t1->val;
                ListNode *k=new ListNode(v%10);
                c=v/10;

                t3->next=k;

                t1=t1->next;
                t3=k;
            }
        }
        else {
            while(t2){
                int v=c+t2->val;
                ListNode *k=new ListNode(v%10);
                c=v/10;

                t3->next=k;

                t2=t2->next;
                t3=k;
            }
        }
        if(c){
            ListNode *k=new ListNode(c);
            c=c/10;

            t3->next=k;
        }
        ans->next=reverse(ans->next);
        return ans->next;
    }
};