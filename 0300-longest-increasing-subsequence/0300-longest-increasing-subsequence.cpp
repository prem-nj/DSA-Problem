class Solution {
public:
    int dp[2501][2501];
    int solve(int i, int p, vector<int>& nums) {
        int n = nums.size();
        if (i >= nums.size()) {
            return 0;
        }

        if (dp[i][p + 1] != -1) {
            return dp[i][p + 1];
        }
        int take = 0;
        if (p == -1 || nums[i] > nums[p]) {
            take = 1 + solve(i + 1, i, nums);
        }
        int skip = solve(i + 1, p, nums);

        return dp[i][p + 1] = max(skip, take);
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        int n = nums.size();

        return solve(0, -1, nums);
    }
};