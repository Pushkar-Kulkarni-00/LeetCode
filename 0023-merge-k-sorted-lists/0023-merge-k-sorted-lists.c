/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    int a[20001]={0};
    for(int i=0;i<listsSize;i++){
        struct ListNode *temp=lists[i];
        for(;temp!=NULL;temp=temp->next)a[temp->val+10000]++;
    }
    struct ListNode *head=NULL;
    struct ListNode *last=NULL;
    for(int i=0;i<20001;i++){
        if(a[i]==0)continue;
        for(int j=0;j<a[i];j++){
            struct ListNode *nn=(struct ListNode *)malloc(sizeof(struct ListNode));
            nn->val=i-10000;
            nn->next=NULL;
            if(head==NULL){
                head=nn;
                last=head;
            }
            else{
                last->next=nn;
                last=last->next;
            }
        }
    }
    return head;

}