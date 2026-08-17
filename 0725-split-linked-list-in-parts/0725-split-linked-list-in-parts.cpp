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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n=0;
        ListNode *t=head;
        while(t!=NULL){n++;t=t->next;}
        int c=n/k;
        int r=n%k;
        vector <int> arr(k,c);
        c=0;
        while(r--)arr[c++]++;

        vector <ListNode *> ans;
        t=head;

        for(int i=0;i<k;i++){
            ListNode *nh=t;
            if(t==NULL){
                ans.emplace_back(nh);
                continue;
            }
            for(int j=0;j<arr[i]-1 && t!=NULL;j++){
                t=t->next;
            }
            if(t==NULL){
                ans.emplace_back(nh);
                break;
            }
            ListNode *k=t;
            t=t->next;
            k->next=NULL;
            ans.emplace_back(nh);

        }
    return ans;
    }
};