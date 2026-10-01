class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_set<long long> s(nums.begin(), nums.end());

        int ans = -1;

        for (long long x : nums) {
            int len = 1;
            long long y = x;

            while (y <= 100000 && s.count(y * y)) {
                y = y * y;
                len++;
            }

            if (len >= 2)
                ans = max(ans, len);
        }

        return ans;
    }
};