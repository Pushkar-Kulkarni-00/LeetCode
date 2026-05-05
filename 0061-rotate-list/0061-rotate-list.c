/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode* rot(struct ListNode *h){
        if(h==NULL)return NULL;
        if(h->next==NULL)return h;
        struct ListNode *t=h;
        struct ListNode *p;
        while(t->next!=NULL){p=t;t=t->next;}
        t->next=h;
        p->next=NULL;
        return t;

    }
    if(head==NULL)return NULL;
    if(head->next==NULL)return head;
    if(k==0)return head;
    int cnt=0;
    struct ListNode *t=head;
    while(t!=NULL){
        cnt++;
        t=t->next;
    }
    k=k%cnt;
    struct ListNode *ans=head;
    for(int i=0;i<k;i++){
        ans=rot(ans);
    }
    return ans;
}