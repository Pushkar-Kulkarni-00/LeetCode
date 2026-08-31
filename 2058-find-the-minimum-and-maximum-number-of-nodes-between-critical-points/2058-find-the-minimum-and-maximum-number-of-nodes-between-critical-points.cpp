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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector <int> ans;
        if(head->next->next==NULL){
            ans.emplace_back(-1);
            ans.emplace_back(-1);
            return ans;
        }
        ListNode *p=NULL;
        ListNode *c=head;
        ListNode *n=c->next;

        vector <int> chk;

        while(c!=NULL){
            if(p==NULL ||n==NULL){
                chk.emplace_back(0);

                p=c;
                c=n;
                if(n)n=n->next;
                continue;
            }

            if((p->val>c->val && n->val>c->val)||(p->val<c->val&&n->val<c->val))chk.emplace_back(1);
            else chk.emplace_back(0);
            p=c;
            c=n;
            n=n->next;
        }
        int t=0;
        for(int x:chk)if(x)t++;
        if(t<2){
            ans.emplace_back(-1);
            ans.emplace_back(-1);
            return ans;    
        }

        int l=-1;
        int r=0;
        
        int min=INT_MAX;
        int max=0;

        int ns=chk.size();

        while(r<ns){
            if(chk[r] && l==-1)l=r;
            if(chk[r])max=r;
            r++;
        }
        max-=l;

        l=-1;
        r=0;

        while(r<ns){
            if(chk[r]&&l==-1){l=r;r++;continue;}
            if(chk[r]){
                if((r-l)<min)min=r-l;
            }
            if(chk[r])l=r;
            r++;
        }
        ans.emplace_back(min);
        ans.emplace_back(max);


        return ans;
    }
};