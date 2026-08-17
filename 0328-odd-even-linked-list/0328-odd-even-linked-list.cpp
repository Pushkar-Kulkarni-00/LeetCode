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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)return NULL;
        if(head->next==NULL || head->next->next==NULL)return head;
        ListNode *tail=head;
        ListNode *curr=head->next;
        ListNode *prev=head;
        int t=0;
        while(curr!=NULL){
            if(t&1){
                prev->next=curr->next;
                curr->next=tail->next;
                tail->next=curr;
                tail=tail->next;
                curr=prev;
            }
            prev=curr;
            curr=curr->next;
            t++;
        }
        return head;
    }
};