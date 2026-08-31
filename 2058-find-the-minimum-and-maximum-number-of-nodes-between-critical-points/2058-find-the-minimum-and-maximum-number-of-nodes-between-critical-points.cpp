class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int first = -1;
        int prev = -1;
        int minDist = INT_MAX;
        int pos = 1;

        ListNode* p = head;
        ListNode* c = head->next;

        while (c->next != nullptr) {
            ListNode* n = c->next;

            if ((p->val > c->val && n->val > c->val) ||
                (p->val < c->val && n->val < c->val)) {

                if (first == -1) {
                    first = pos;
                } else {
                    minDist = min(minDist, pos - prev);
                }

                prev = pos;
            }

            p = c;
            c = n;
            pos++;
        }

        if (first == prev)
            return {-1, -1};

        return {minDist, prev - first};
    }
};