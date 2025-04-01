#include <bits/stdc++.h>
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> deq;
        vector<int> ans;
        int j = 0, i = 0;

        while (j < n) {
            // Remove smaller elements from the back
            while (!deq.empty() && nums[deq.back()] < nums[j]) {
                deq.pop_back();
            }

            // Push current index
            deq.push_back(j);

            // Maintain window size
            if (j - i + 1 > k) {
                if (deq.front() == i) {
                    deq.pop_front();
                }
                i++;  // Slide the window
            }

            // Collect max when window size reaches `k`
            if (j - i + 1 == k) {
                ans.push_back(nums[deq.front()]);
            }

            j++;  // Expand the window
        }

        return ans;
    }
};
