/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *t=node,*n=node->next;
    t->val=n->val;
    t->next=n->next;
    free(n);
}