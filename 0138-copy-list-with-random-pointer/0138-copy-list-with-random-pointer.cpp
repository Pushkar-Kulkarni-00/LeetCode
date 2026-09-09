/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr)return nullptr;
        unordered_map <Node *,Node *> k;
        Node *t=head;
        while(t){
            k[t]=new Node(t->val);
            t=t->next;
        }
        t=head;
        while(t){
            k[t]->next=k[t->next];
            k[t]->random=k[t->random];
            t=t->next;
        }
        return k[head];
    }
};