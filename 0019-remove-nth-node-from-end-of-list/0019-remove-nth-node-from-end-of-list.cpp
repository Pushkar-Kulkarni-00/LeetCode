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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr)return nullptr;
        if(head->next==nullptr)return nullptr;
        vector <ListNode *> k;
        ListNode *ans=new ListNode(-1,head);
        ListNode *t=ans;
        while(t!=nullptr){
            k.emplace_back(t);
            t=t->next;
        }
        int l=k.size();
        int r=l-n;
        if((r-1)>=0 && k[r-1]!=nullptr && k[r]!=nullptr)k[r-1]->next=k[r]->next;
        return ans->next;
    }
};