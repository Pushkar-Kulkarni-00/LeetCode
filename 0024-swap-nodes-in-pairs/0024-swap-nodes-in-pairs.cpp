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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr ||head->next==nullptr)return head;
        ListNode *ans=new ListNode(-1,head);
        ListNode *t=head;
        ListNode *p=ans;
        while(t && t->next){
                ListNode *k=t->next;
                p->next=k;
                t->next=k->next;
                k->next=t;

                p=t;
                t=t->next;
        }  
        return ans->next;
    }
};