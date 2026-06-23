class Solution {
public:
    long long maximumSum(vector<int>& nums, int m, int l, int r) {
        int n = nums.size();

        vector<long long> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + nums[i];
        }

        const long long NEG = -(long long)4e18;

        vector<long long> prev(n + 1, 0), cur(n + 1, NEG);

        long long ans = NEG;

        for (int k = 1; k <= m; k++) {
            fill(cur.begin(), cur.end(), NEG);

            deque<int> dq;

            for (int i = 1; i <= n; i++) {

                int add = i - l;
                if (add >= 0) {
                    long long val = prev[add] - pref[add];

                    while (!dq.empty() &&
                           prev[dq.back()] - pref[dq.back()] <= val)
                        dq.pop_back();

                    dq.push_back(add);
                }

                while (!dq.empty() && dq.front() < i - r)
                    dq.pop_front();

                cur[i] = cur[i - 1];

                if (!dq.empty()) {
                    cur[i] = max(cur[i],
                                 pref[i] +
                                 (prev[dq.front()] - pref[dq.front()]));
                }
            }

            ans = max(ans, cur[n]);
            swap(prev, cur);
        }

        return ans;
    }
};