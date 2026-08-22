/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head==NULL)return NULL;
        Node *t=head;
        while(t!=NULL){
            if(t->child){
                Node *tnex=flatten(t->child);
                Node *next=t->next;
                
                t->next=tnex;
                tnex->prev=t;
                t->child=NULL;

                Node *tt=tnex;
                while(tt->next!=NULL)tt=tt->next;

                tt->next=next;
                if(next!=NULL)next->prev=tt;

                t=tt;
            }
            t=t->next;
        }
        return head;
    }
};