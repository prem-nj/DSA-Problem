class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> check(nums.begin(), nums.end());

        int ans = 0;

        for (int x : check) {

            if (check.find(x - 1) == check.end()) {

                int curr = x;
                int len = 1;

                while (check.find(curr + 1) != check.end()) {
                    curr++;
                    len++;
                }

                ans = max(ans, len);
            }
        }

        return ans;
    }
};