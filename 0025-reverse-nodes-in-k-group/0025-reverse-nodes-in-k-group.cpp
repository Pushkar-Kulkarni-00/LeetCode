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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector <ListNode *>t;
        while(head){t.emplace_back(head);head=head->next;}
        int n=t.size();
        for(int i=0;i+k<=n;i+=k){
            int l=i;
            int r=i+k-1;
            while(l<r){
                ListNode *temp=t[l];
                t[l]=t[r];
                t[r]=temp;
                l++;
                r--;
            }
        }
        for(int i=1;i<n;i++){
            t[i-1]->next=t[i];
        }
        t[n-1]->next=nullptr;
        return t[0];
    }
};