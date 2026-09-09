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
        Node * nh=nullptr;
        Node * nt=nullptr;
        Node *t=head;
        unordered_map<Node *,int>k1;
        unordered_map<int,Node *>k2;
        int cnt=0;
        while(t){
            Node *nn=new Node(t->val);
            nn->next=nullptr;
            nn->random=nullptr;
            if(nh)nt->next=nn;
            else nh=nn;
            nt=nn;
            k1[t]=cnt;
            k2[cnt++]=nn;
            t=t->next;
        }
        t=head;
        Node *r=nh;
        while(t && r){
            r->random = (t->random == nullptr) ? nullptr : k2[k1[t->random]];
            t=t->next;
            r=r->next;
        }
        return nh;
    }
};