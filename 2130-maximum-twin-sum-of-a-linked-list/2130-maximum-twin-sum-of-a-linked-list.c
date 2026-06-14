/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int st[100000];
int t;

void push(int x){
    st[t++]=x;
}

int pairSum(struct ListNode* head) {
    t=0;
    struct ListNode * temp=head;
    while(temp!=NULL){
        push(temp->val);
        temp=temp->next;
    }
    int max=0;
    int s;
    for(int i=0;i<t/2;i++){
        s=st[i]+st[t-i-1];
        if(s>max)max=s;
    }
    return max;
}