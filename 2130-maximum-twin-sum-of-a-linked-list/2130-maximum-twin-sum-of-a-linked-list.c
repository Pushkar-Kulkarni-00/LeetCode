/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int stack[100001];
int t=-1;
int pop(){
    return stack[t--];
}
void push(int x){
    stack[++t]=x;
}

int pairSum(struct ListNode* head) {
    struct ListNode *i=head;
    struct ListNode *j=head;
    while(j!=NULL){
        push(i->val);
        i=i->next;
        j=j->next->next;
    }
    int max=0;
    while(i!=NULL){
        int lmax=pop();
        lmax+=i->val;
        if(lmax>max)max=lmax;
        i=i->next;
    }
    return max;
}