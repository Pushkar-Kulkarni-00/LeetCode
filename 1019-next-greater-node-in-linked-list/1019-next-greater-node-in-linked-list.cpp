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
    ListNode * rll(ListNode * h){
        if(h==NULL)return NULL;
        ListNode *p=NULL;
        ListNode *c=h;

        while(c!=NULL){
            ListNode *next=c->next;
            c->next=p;

            p=c;
            c=next;
        }
        return p;
    }

    vector<int> nextLargerNodes(ListNode* head) {
        if(head==nullptr)return {};
        if(head->next==nullptr)return {0};
        ListNode *h=rll(head);
        vector <int> ans;
        vector <int> st;
        ListNode *t=h;
        while(t!=nullptr){
            while(!st.empty() && st.back()<=t->val)st.pop_back();
            if(st.empty())ans.emplace_back(0);
            else ans.emplace_back(st.back());
            st.emplace_back(t->val);
            t=t->next;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};