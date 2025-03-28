#include <bits/stdc++.h>
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int n=nums.size();
        deque<int>deq;
        vector<int>ans;
        for(int i=0;i<n;i++){
            while(!deq.empty() && nums[deq.back()]<nums[i]){
                deq.pop_back();
            }
            deq.push_back(i);
            if (deq.front() < i - k + 1) {
                deq.pop_front();
            }
            if(i>=k-1){
                ans.push_back(nums[deq.front()]);
            }
        }
    return ans;
    }
};