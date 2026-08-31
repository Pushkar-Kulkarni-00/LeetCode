class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans;

        if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
            return {-1, -1};

        ListNode* p = head;
        ListNode* c = head->next;
        ListNode* n = c->next;

        vector<int> chk;

        while (n != nullptr) {
            if ((p->val > c->val && n->val > c->val) ||
                (p->val < c->val && n->val < c->val)) {
                chk.push_back(1);
            } else {
                chk.push_back(0);
            }

            p = c;
            c = n;
            n = n->next;
        }

        int first = -1;
        int prev = -1;
        int minDist = INT_MAX;
        int maxDist = -1;

        for (int i = 0; i < chk.size(); i++) {
            if (!chk[i]) continue;

            if (first == -1) {
                first = i;
            } else {
                minDist = min(minDist, i - prev);
                maxDist = i - first;
            }

            prev = i;
        }

        if (maxDist == -1)
            return {-1, -1};

        return {minDist, maxDist};
    }
};