class Solution {
    int firstOccurrence(const vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1, ans = -1;
        while (s <= e) {
            int m = s + (e - s) / 2;
            if (nums[m] == target) {
                ans = m;
                e = m - 1;  // keep searching left
            } else if (target < nums[m]) {
                e = m - 1;
            } else {
                s = m + 1;
            }
        }
        return ans;
    }

    int lastOccurrence(const vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1, ans = -1;
        while (s <= e) {
            int m = s + (e - s) / 2;
            if (nums[m] == target) {
                ans = m;
                s = m + 1;  // keep searching right
            } else if (target < nums[m]) {
                e = m - 1;
            } else {
                s = m + 1;
            }
        }
        return ans;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f = firstOccurrence(nums, target);
        int l = lastOccurrence(nums, target);
        return {f, l};
    }
};
