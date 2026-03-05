/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry=0;
    struct ListNode*head=NULL;
    struct ListNode*tail=NULL;
    while(l1!=NULL || l2!=NULL || carry){
        int t=carry;
        if(l1!=NULL){t+=l1->val;l1=l1->next;}
        if(l2!=NULL){t+=l2->val;l2=l2->next;}
        struct ListNode * nn=(struct ListNode*)malloc(sizeof(struct ListNode));
        nn->val=t%10;
        carry=t/10;
        nn->next=NULL;
        if (head==NULL){
            head=nn;
            tail=nn;
        }
        else{
            tail->next=nn;
            tail=nn;
        }
    }
    return head;
}