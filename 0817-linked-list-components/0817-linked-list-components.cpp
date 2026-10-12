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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set <int> k(nums.begin(),nums.end());
        ListNode *t=head;
        int cnt=0;
        bool on=false;
        while(t!=nullptr){
            if(k.count(t->val)>=1){
                if(on){
                    t=t->next;
                    continue;
                }
                else on=true;
            }
            else{
                if(on){
                    cnt+=1;
                    on=false;
                }
            }
            t=t->next;
        }
        if(on)cnt++;
        return cnt;

    }
};